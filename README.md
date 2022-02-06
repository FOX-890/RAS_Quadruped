# The RAS Quadruped Robot
## This file should be updated as needed

# Getting Started
## Cloning the Repository
First, be sure to download Git and GitBash from the following link: https://git-scm.com/downloads

GitBash provides a better terminal for git commands compared to the windows terminal.
I would recommend getting used to using the commands in the terminal over the desktop app
as it will be better in the long run.

Once Git and GitBash are downloaded, make a file somewhere on your computer and complete the following steps:
1. Open the file
2. Right click in the window and select 'GitBash here'
3. A GitBash terminal should open up with a file path to your folder
4. Go to the GitHub repository and go to 'Code' at the top right
5. Copy the HTTPS link it gives you
6. In the GitBash terminal, type the following (without brackets)  
   `clone \<insert link here\>`
7. This will clone the stuff on the GitHub repository onto your local machine

You should now see all the files currently pushed to the repository on your own machine.
***NEVER TOUCH THE .GIT FILE***

## Working with Git
Now that the repository is on your machine, there are some steps to make your own changes to the repo.
Below are some of the necessary git commands you should know:
- `git clone` takes an existing repository and copies it to your machine
- `git status` tells you what files you have modified, what needs to be added, and what is ready to commit
- `git add \<file name\>` adds all modified files to the **staging area**, essentially prepping them for commit
- `git commit` commits your changes to your **local** repository
- `git push` pushes your changes to the **global** repository
- `git pull` pulls any changes that happened in the global repository to your local repository
- `git branch` branches off the main and all changes do not affect main
- `git checkout \<branch name\>` jumps to specified branch

Branching would only be necessary if you plan to make sweeping changes that you won't want affecting the main.

Once the repository is cloned to your machine, the following is the simplest process to follow to push changes
#### General pushing process
1. `git pull`
2. `git add .`
3. `git commit -m "Some short message"`
4. `git push`

`git pull` should be done before you even begin work, ensures your main is up to date.  
The `.` in `git add` is shorthand for adding every file in your local repo that was changed, specific files can be added as needed.  
The `-m` flag for `git commit` allows for attaching a message. Make a short message in the quotes with changes.  
The changes are now saved to your local repo, finalize the process with pushing your changes to global with `git push`.  
