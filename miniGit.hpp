#ifndef MINIGIT_HPP
#define MINIGIT_HPP

#include <experimental/filesystem>
#include "miniGit.hpp"

namespace fs = std::experimental::filesystem;



// Node structs
struct singlyNode;
struct doublyNode;

struct doublyNode{
  int commitNumber;
  singlyNode * head;
  doublyNode * previous;
  doublyNode * next;
};

struct singlyNode{
  std::string fileName;    // Name of local file
  std::string fileVersion; // Name of file in .minigit folder
  singlyNode * next;
};

// Prototypes to declare Helper - Functions :
void _deleteSLLNode(singlyNode* delNode, doublyNode* curr);
void _displayList(doublyNode* root, int version);
void _displayListCurrentVersion(doublyNode* root);
void _displayEntireList(doublyNode* root);
void _copy(std::string filenameIn, std::string fileVersion);
int _latestVersion(doublyNode* root);
int _miniGitExists();
bool _fileExists(std::string filenameIn);
bool _fileCompare(std::string fileOne, std::string fileTwo);
void _updateVersionTxt(doublyNode* root);



// Class def
class miniGit{
  private:
    bool isInit;
    bool commitMade = false;
    int checkedOutVersion = 0;
    doublyNode* root;

  public:
    miniGit();
    ~miniGit();
    void init();
    void add();
    void add(std::string filenameIn);
    void remove();
    void remove(std::string filenameIn);
    void commit();
    void checkout();
};

#endif
