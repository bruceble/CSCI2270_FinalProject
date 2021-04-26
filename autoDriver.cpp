#include <experimental/filesystem>
#include <iostream>
#include <fstream>

#include "../src/Core.hpp"

// TO COMPILE WITH G++ :
/*
  cd miniGit/
  mkdir build/
  cd build/
  g++ -std=c++17 ../src/Core.cpp ../src/miniGit.cpp -o minigit

  # add linker statement if above doesn't work: -lstdc++fs
  g++ -std=c++17 ../src/Core.cpp ../src/miniGit.cpp -o minigit -lstdc++fs

*/

int main(){
  std::cout << "Starting miniGit... \nPress Enter to Continue\n";
  std::cin.ignore();
  Core miniGit;
  // miniGit.init();
  miniGit.add("empty.txt");
  miniGit.add("notEmpty.txt");
  miniGit.add("stillEmpty.txt");
  miniGit.add(".minigit/hidden.txt");
  // miniGit.remove("empty.txt");
  // miniGit.remove("notEmpty.txt");
  // miniGit.remove("stillEmpty.txt");
  // miniGit.remove();

  miniGit.commit();

  return 0;
}
