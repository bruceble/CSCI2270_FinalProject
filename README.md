# CSCI2270_FinalProject
CSCI 2270: Data Structures - Project SpecificationsMiniGit (A mini version control system) <br/>
NOTE: miniGit.cpp is in .gitignore until project is submitted and grading is complete. 

# Executible File
## Compile With g++
  g++ -std=c++17 miniGit.cpp driver.cpp -o minigit                                    <br/>
                                                                                      <br/>
  \# add linker statement if above doesn't work: -lstdc++fs                           <br/>
  g++ -std=c++17 miniGit.cpp driver.cpp -o minigit -lstdc++fs                         <br/>
## Executible Flow (in terminal)
$  ./MiniGit                                                                          <br/>
                                                                                      <br/>
Starting miniGit...                                                                   <br/>
Press Enter to Continue                                                               <br/>
                                                                                      <br/>
Init cancelled: '.minigit' has been previously created. Continue anyways? (y/n)       <br/>
                                                                                      <br/>
Select an option.                                                                     <br/>
(1)   Add a file                                                                      <br/>
(2)   Remove a file                                                                   <br/>
(3)   Commit changes                                                                  <br/>
(4)   Checkout                                                                        <br/>
Enter any other value to quit.                                                        <br/>
  
### Option (1)
You selected the add option...                                                        <br/>
Please enter an existing filename or type 'quit'                                      <br/>
                                                                                      <br/>
$ USER INPUT                                                                          <br/>
                                                                                      <br/>
The file: empty.txt was added to the latest version of .minigit directory             <br/>


### Option (2)
You selected the remove option...                                                     <br/> 
Please enter an existing filename or type '?' to see current files in repo or 'quit'  <br/>
                                                                                      <br/>
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
 \>>> filename_added_to_repo                                                           <br/>

### Option (4)
(Uncommitted) Version: 1                                                              <br/>
 \>>> empty.txt                                                                        <br/>
-----------------                                                                     <br/>
Commit #0                                                                             <br/>
 \>>> empty.txt0                                                                       <br/>
Select a commit version                                                               <br/>
                                                                                      <br/>
$ USER INPUTS VERSION NUMBER FROM PRINTED VALUES ABOVE                                <br/>
                                                                                      <br/>
The selected version: 1 is already checked out: version 1                             <br/>
                                                                                      <br/>
OR                                                                                    <br/>
                                                                                      <br/>
Commit #0                                                                             <br/>
 \>>> notEmpty.txt0                                                                    <br/> 
Copy of '.minigit/notEmpty.txt0' to 'notEmpty.txt' complete.                          <br/>

# Code Implementations
This implementations includes 4 core methodologies: add(), remove(), commit() and checkout(). 

## create a minigit object:
miniGit repo;

## Method: repo.add()
1.  .2.  3.  4.  

<ol>
  <li> 
    Prompt user to enter a file name. 
  </li>
  <li>
    Check whether the file with the given name exists in the current directory.  If not, keep prompting the user to enter a valid file name.
  </li>
  <li>
    The SLL is checked to see whether the file has already been added.  A file by the samename cannot be added twice.
  </li>
  <li>
    A new SLL node gets added containing the name of the input file, name of the repos-itory file, as well as a pointer to the next node.  The repository file name should be the combination of the original file name and the version number.  For example, if userfile help.txt is added, the new file to be saved in the .minigit repository should be named help.txt0, where 0 is the version number.  (The initial file version should be 0.)
  </li>
</ol> 

<br/>

## Method: repo.remove()

<ol>
<li>First item</li>
<li>Second item</li>
<li>Third item</li>
<li>Fourth item</li>
</ol> 

<br/>

## Method: repo.commit()

<ol>
<li>First item</li>
<li>Second item</li>
<li>Third item</li>
<li>Fourth item</li>
</ol> 

<br/>

## Method: repo.checkout()

<ol>
<li>First item</li>
<li>Second item</li>
<li>Third item</li>
<li>Fourth item</li>
</ol> 

<br/>
