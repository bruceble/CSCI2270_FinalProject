# CSCI2270_FinalProject
CSCI 2270: Data Structures - Project SpecificationsMiniGit (A mini version control system) 

# Executible File
## Compile With g++
  g++ -std=c++17 miniGit.cpp driver.cpp -o minigit                                <br/>
                                                                                  <br/>
  \# add linker statement if above doesn't work: -lstdc++fs                       <br/>
  g++ -std=c++17 miniGit.cpp driver.cpp -o minigit -lstdc++fs                     <br/>
## Executible Flow (in terminal)
$  ./MiniGit                                                                      <br/>
                                                                                  <br/> <br/>
Starting miniGit...                                                               <br/>
Press Enter to Continue                                                           <br/>
                                                                                  <br/>
Init cancelled: '.minigit' has been previously created. Continue anyways? (y/n)   <br/>
                                                                                  <br/>
Select an option.                                                                 <br/>
(1)   Add a file                                                                  <br/>
(2)   Remove a file                                                               <br/>
(3)   Commit changes                                                              <br/>
(4)   Checkout                                                                    <br/>
Enter any other value to quit.                                                    <br/>
  
### Option (1)
You selected the add option...                                                    <br/>
Please enter an existing filename or type 'quit'                                  <br/>
$ USER INPUT                                                                      <br/>
The file: empty.txt was added to the latest version of .minigit directory         <br/>


### Option (2)
You selected the remove option...                                                     <br/> 
Please enter an existing filename or type '?' to see current files in repo or 'quit'  <br/>
$ USER INPUTS FILENAME OR SELECTS OPTIONS                                             <br/>
                                                                                      <br/>
Removed filename: empty.txt from current version of the repository.                   <br/>



### Option (3)
Committing...                                                                         <br/>
                                                                                      <br/>
Initial commit complete.                                                              <br/>
No changes to commit from the added files.                                            <br/>
Staying on version: [-1]                                                              <br/>
Make changes in order to commit to version [0]                                        <br/>
                                                                                      <br/>
OR                                                                                    <br/>
                                                                                      <br/>
Copy of 'empty.txt' to '.minigit/empty.txt0' complete.                                <br/>
Initial commit complete.                                                              <br/>
 >>> filename_added_to_repo                                                           <br/>

### Option (4)
(Uncommitted) Version: 1                                                              <br/>
 >>> empty.txt                                                                        <br/>
-----------------                                                                     <br/>
Commit #0                                                                             <br/>
 >>> empty.txt0                                                                       <br/>
Select a commit version                                                               <br/>
$ USER INPUTS VERSION NUMBER FROM PRINTED VALUES ABOVE                                <br/>
                                                                                      <br/>
The selected version: 1 is already checked out: version 1                             <br/>
                                                                                      <br/>
OR                                                                                    <br/>
                                                                                      <br/>
Commit #0                                                                             <br/>
 >>> notEmpty.txt0                                                                    <br/> 
Copy of '.minigit/notEmpty.txt0' to 'notEmpty.txt' complete.                          <br/>

# Code Implementations
This implementations includes 4 core methodologies: add(), remove(), commit() and checkout(). 

## create a minigit object:
miniGit repo;

## Method: repo.add()

<br/>

## Method: repo.remove()

<br/>

## Method: repo.commit()

<br/>

## Method: repo.checkout()

<br/>
