This is a list of short assignments to help familiarize you with 
usage of our code and a refresher on basic C++.

When you log in and see your command line, clone this with the command
git clone https://github.com/<Your github account name>/coding_Practice.git 
(Notice that this link is under "clone or download" for future reference)

Start with the folder part1, then part2, etc.  They're ordered by complexity.
Read "assignment.txt" (type "cat assignment.txt" or "vim assignment.txt")
to see what to do in that folder.

==========================================
Some commands for bash (terminal) control:
==========================================

ls: Lists everything in your current directory/folder.
ls -a:  Lists everything including hidden files in your current folder.
(Hidden directories are ones that begin with ., as in ".bashrc")

cd <directory>:  Changes folder to <directory>.  
cd ~: Returns you to your home directory.
cd /: Returns you to your the top system directory (outermost folder).

You can use entire pathways, as in 
cd ~/coding_Practice/part1


Move files: 
mv <source> <destination>  (Warning! This will overwirte destination.)

Copy files:
cp <source> <Copied file name> (Warning! This will overwrite the destination if the name's taken)

Delete files:
rm <file>

Make directories/folders:
mkdir <folder name>

Delete directories (and all contents):
rm -r <folder name> (Asks confirmation)
rm -rf <folder name> (Doesn't ask confirmation)

The directory .. is always "up 1", and the directory . is always "here".

---------------------------------------------

Examples: 
cd ~
mv coding_Practice/part1/test.txt .
Moves "test.txt" from the part1 folder to your home directory
------------
cd ~/coding_Practice/part1
cd ../..
moves into part1 and back out to home folder.
------------

==========================================
Git commands:
==========================================
git clone <clone link> 
(Copies the linked repository's master branch to this folder)

git clone --single-branch --branch <branchname> <github repository URL> 
(Clones a specific branch of the linked repository to this folder)

git status 
(Shows the status of all items in the current directory)

git add <file 1> <file 2> ... <file n> 
(Stages files for commit)

git commit -m "commit_msg"  
(Commits staged files. Think of this as "saving" them with message "commit_msg")

git merge 
(Takes changes from your online repository and updates your local code with it, must be used before push)

git push 
(Updates your online repository with the committed changes)

git remote -v
