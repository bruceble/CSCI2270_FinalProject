#include <experimental/filesystem>
#include <iostream>
#include <fstream>

#include "miniGit.hpp"

// TO COMPILE WITH G++ :
/*
  cd miniGit/
  mkdir build/
  cd build/
  g++ -std=c++17 miniGit.cpp driver.cpp -o minigit

  # add linker statement if above doesn't work: -lstdc++fs
  g++ -std=c++17 miniGit.cpp driver.cpp -o minigit -lstdc++fs

*/

void displayOptions(bool noArg){
  if(noArg){
    std::cout << "Select an option.\n"
    "(1)   Add a file\n"
    "(2)   Remove a file\n"
    "(3)   Commit changes\n"
    "(4)   Checkout\n"
    "Enter any other value to quit." << std::endl;
  }
  else{
    std::cout << "Command Line Help: \n"
    "./miniGit add|remove|commit|checkout FILEPATH \n"
    "options:\n"
    "add:   read file\n"
    "remove:   play file\n"
    "commit:   write file\n"
    "checkout:   time plot of waveform" << std::endl;
  }
}


int main(int argc, const char * argv[]){
  std::cout << "Starting miniGit... \nPress Enter to Continue\n";
  std::cin.ignore();
  miniGit repo;
  repo.init();

  if(argc<2){
    int opt = 1;
    std::string strOpt;

    while(opt > 0 && opt < 5){
      displayOptions(true);
      std::cin >> strOpt;
      opt = std::stoi(strOpt);

      switch(opt) {
        case 1:
          repo.add();
          break;
        case 2:
          repo.remove();
          break;
        case 3:
          repo.commit();
          break;
        case 4:
          repo.checkout();
          break;
        default:
          std::cout << "You entered: " << strOpt << " ending program." << std::endl;
      }

    }

  }


  return 0;
}
