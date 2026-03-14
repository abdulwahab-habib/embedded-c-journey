Daily Embedded C Workflow

1. mkdir -p dayXX_name/src
2. touch dayXX_name/src/main.c
3. cp previous_day/Makefile dayXX_name/Makefile
4. cd dayXX_name
5. make
6. make run
7. cd ..
8. git status
9. git add .
10. git commit -m "dayXX: description"
11. git push


Key discipline
Each day must end with:
Copy code

make
make run
git add .
git commit -m "dayXX: task"
git push
This builds three habits simultaneously:
C programming
embedded systems thinking
version-control discipline
