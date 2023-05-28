cls
 
 

@echo off
del .git 
git init

git status

pause
git add .
git commit -m  "first commit" 
git branch -M master
git remote add origin https://github.com/danizalm05/ai.git
git remote -v
pause 
cls
git push -u origin master

pause