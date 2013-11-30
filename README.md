3개의 파일을 추가한다.
예제에서는 txt와 ruby파일이지만, 여기에서는 c파일로 변경해본다.
- 3_1.c
- 3_1.h
- Makefile

git branch 3.1_practice
git checkout 3.1_practice
git branch

touch 3_1.c 3_1.h Makefile
git status
git add 3_1.c 3_1.h Makefile README.md

git checkout 3.1_practice

git checkout master
git merge 3.1_practice
git branch -d 3.1_practice

div 함수의 버그가 발견되었다. (issue 34)
버그수정할 것.

