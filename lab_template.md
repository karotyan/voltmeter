## Національний технічний університет України<br>“Київський політехнічний інститут ім. Ігоря Сікорського”

## Факультет прикладної математики<br>Кафедра системного програмування і спеціалізованих комп’ютерних систем


# Лабораторна робота №1<br>"Базова робота з git"

## КВ-21 Кукса Кирило

## Хід виконання роботи

### 1. Зклонувати будь-який невеликий проєкт open-source з github

Спочатку проекти були завантажені з допомогою cmd, потім перейшов на git bash
```
C:\Users\ccuxa>cd C:\3course\5semester\tirpz


C:\3course\5semester\tirpz>mkdir lab1

C:\3course\5semester\tirpz>cd lab1

C:\3course\5semester\tirpz\lab1>git clone https://github.com/karotyan/voltmeter
Cloning into 'voltmeter'...
remote: Enumerating objects: 18, done.
remote: Counting objects: 100% (18/18), done.
remote: Compressing objects: 100% (14/14), done.
remote: Total 18 (delta 4), reused 18 (delta 4), pack-reused 0 (from 0)
Receiving objects: 100% (18/18), 13.83 MiB | 4.27 MiB/s, done.
Resolving deltas: 100% (4/4), done.

C:\3course\5semester\tirpz\lab1>git clone https://github.com/karotyan/voltmeter --depth=1 --single-branch --branch=main openrgb-shallow
Cloning into 'openrgb-shallow'...
remote: Enumerating objects: 10, done.
remote: Counting objects: 100% (10/10), done.
remote: Compressing objects: 100% (10/10), done.
remote: Total 10 (delta 0), reused 7 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (10/10), 13.80 MiB | 2.44 MiB/s, done.
```
```
ccuxa@DESKTOP-PG1JDDF MINGW64 ~
$ cd c:/3course/5semester/tirps/lab1
bash: cd: c:/3course/5semester/tirps/lab1: No such file or directory

ccuxa@DESKTOP-PG1JDDF MINGW64 ~
$ cd c:/3course

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course
$ cd 5semester/tirpz/lab1

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1
$ du -sh ./*/.git
14M     ./openrgb-shallow/.git
14M     ./voltmeter/.git
```
Розміри не відрізняються, оскільки мій проєкт містив лише 1 гілку і 2 коміти в ній

### 2. Зробити не менше трьох локальних комітів

3 коміти: створив noname.py, редагував його і створив noname2.py

```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1
$ cd voltmeter

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        noname.py

nothing added to commit but untracked files present (use "git add" to track)

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git add noname.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   noname.py


ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -m "added noname.py"
[main 73850c2] added noname.py
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 noname.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   noname.py

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        noname2.py

no changes added to commit (use "git add" and/or "git commit -a")

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status -uno
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   noname.py

no changes added to commit (use "git add" and/or "git commit -a")

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -am "modified noname and noname2 did not include"
[main 0d2fd17] modified noname and noname2 did not include
 1 file changed, 1 insertion(+)

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        noname2.py

nothing added to commit but untracked files present (use "git add" to track)

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git add noname2.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -m "added everything"
[main 66bbb9e] added everything
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 noname2.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 3 commits.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

```

### Продемонструвати уміння вносити зміни до останнього коміту за допомогою опції --amend



```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit --amend -m "added a lot of files"
[main 2e62102] added a lot of files
 Date: Tue Dec 24 01:56:11 2024 +0200
 3 files changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 noname2.py
 create mode 100644 noname3.py
 create mode 100644 othernoname.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)

```

### 4. Продемонструвати уміння об'єднати кілька останніх комітів в один за допомогою git reset.


```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git reset Head~2
Unstaged changes after reset:
M       noname.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   noname.py

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        noname2.py
        noname3.py
        othernoname.py

no changes added to commit (use "git add" and/or "git commit -a")

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git add *

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit "new megacommit"
error: pathspec 'new megacommit' did not match any file(s) known to git

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -m "new megacommit"
[main e6fcb2e] new megacommit
 4 files changed, 1 insertion(+)
 create mode 100644 noname2.py
 create mode 100644 noname3.py
 create mode 100644 othernoname.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)

```

###5. Видалити файл(и) одним способом на вибір.

Обрано розширений варіант

```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ rm noname3.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    noname3.py

no changes added to commit (use "git add" and/or "git commit -a")

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git add noname3.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        deleted:    noname3.py


ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -m "deleted noname3"
[main 8088b91] deleted noname3
 1 file changed, 0 insertions(+), 0 deletions(-)
 delete mode 100644 noname3.py
```
### 6. Перемістити файл(и) одним способом на вибір

Обрано короткий варіант

```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git mv noname2.py newname2.py

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 3 commits.
  (use "git push" to publish your local commits)

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        renamed:    noname2.py -> newname2.py


ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -m "rename noname2->newname2"
[main 6dc798b] rename noname2->newname2
 1 file changed, 0 insertions(+), 0 deletions(-)
 rename noname2.py => newname2.py (100%)

```
### 7. Гілкування:

Створено окрім головної, ще 2 гілки. Після цього в кожній з 3 гілок зроблений коміт

```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git branch
* main

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git branch my-local-branch-1

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git checkout -b my-locacl-branch-2
Switched to a new branch 'my-locacl-branch-2'

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-locacl-branch-2)
$ git add br2.txt

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-locacl-branch-2)
$ git commit -m "got commit on br2"
[my-locacl-branch-2 c686a6a] got commit on br2
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 br2.txt

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-locacl-branch-2)
$ git branch
  main
* my-locacl-branch-2
  my-local-branch-1

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-locacl-branch-2)
$ git branch my-local-branch-1
fatal: a branch named 'my-local-branch-1' already exists

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-locacl-branch-2)
$ git checkout

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-locacl-branch-2)
$ git checkout my-local-branch-1
Switched to branch 'my-local-branch-1'

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-local-branch-1)
$ git add br1.txt

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-local-branch-1)
$ git commit -m "new commit on br1"
[my-local-branch-1 76032d3] new commit on br1
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 br1.txt

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (my-local-branch-1)
$ git checkout main
Switched to branch 'main'
Your branch is ahead of 'origin/main' by 4 commits.
  (use "git push" to publish your local commits)

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git add main.txt

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git commit -m "forsed main"
[main 9d8cd28] forsed main
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 main.txt
```
### 8. Продемонструвати уміння знайти в історії комітів набір комітів, в яких була зміна по конкретному шаблону в конкретному файлі



```
ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git log
commit 1d0e7744b2fcfd95efa0a4e8b3bae7c3adc08a9c (HEAD -> main)
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:54:32 2024 +0200

    pr1

commit 9d8cd28a24c9de02c8c1dff17e0b42e65bcbecc8
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:43:16 2024 +0200

    forsed main

commit 6dc798b60dab9ce6ada421595e36f5a67a1b31e3
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:30:05 2024 +0200

    rename noname2->newname2

commit 8088b9151bb8577fca448a8555bfd07a2a5fd194
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:24:43 2024 +0200

    deleted noname3

commit e6fcb2e207b5c8fb623abe8cf2107ca91425ed9c
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:17:27 2024 +0200

    new megacommit

commit 73850c2ad9ec0ae9987e218df1980ceefae7f883
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 01:51:55 2024 +0200

    added noname.py

commit 42a5099fa6c7769058c0b47b6619c1e36166aed9 (origin/main, origin/HEAD)
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Thu Nov 14 16:00:57 2024 +0200

    Redacted Doc1

commit 368d9c0fba3dd0eaae43358bc1f35a328e26d847
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Thu Nov 14 15:49:23 2024 +0200

    fixed voltage koef calculation bug

commit 6f6b09e60073be1d21d05b398030c86a39dacc38
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Sun Nov 10 04:08:48 2024 +0200

    first commit

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git log -G 'print1' noname.py
commit 1d0e7744b2fcfd95efa0a4e8b3bae7c3adc08a9c (HEAD -> main)
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:54:32 2024 +0200

    pr1

ccuxa@DESKTOP-PG1JDDF MINGW64 /c/3course/5semester/tirpz/lab1/voltmeter (main)
$ git show 1d0e7744b2fcfd95efa0a4e8b3bae7c3adc08a9c
commit 1d0e7744b2fcfd95efa0a4e8b3bae7c3adc08a9c (HEAD -> main)
Author: Karotyan <c.cuxa2015@gmail.com>
Date:   Tue Dec 24 02:54:32 2024 +0200

    pr1

diff --git a/noname.py b/noname.py
index e3cbb62..ff8aa9a 100644
--- a/noname.py
+++ b/noname.py
@@ -1 +1,2 @@
 wadawdawdaw dawdawdawdawdawd
+print1
\ No newline at end of file
```




