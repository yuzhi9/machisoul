# Git command

## 创建版本库

```
$ git config --global user.name "<name>"
$ git config --global user.email "<email>"
$ git config user.name
$ git config user.email
$ ssh-keygen -t rsa -C "<email>"
$ git clone <url> #clone a remote repository with SSH protocol or HTTPS protocol
$ git init [folder] #initialize local repository
```

## 修改和提交

```
$ git status #view status
$ git add .
$ git rm <file>
$ git commit -m "<commit message>"
```

## 查看提交历史

```
$ git log
$ git log -p <file> #view the commit log of a given file
```

## 撤销

```
$ git reset --hard HEAD
$ git reset --hard HEAD^
$ git reset --hard <commit>
$ git reset --soft <commit>
$ git checkout .
$ git chekcout <file>
```

## 分支与标签

```
$ git branch
$ git branch <new branch>
$ git branch -d <branch>
$ git branch -m <old branch name> <new branch name>
$ git checkout <branch>
$ git checkout -b <new branch> #build and switch to a new branch using the current branch as a prototype
$ git checkout -b <new branch> origin/<remote branch>
$ git diff <branch>
$ git cherry-pick <commit>
```

## 合并与衍合

```
$ git merge <branch>
$ git merge --strategy-option=theirs <other branch> #Force the merging of other branch into the current branch
$ git rebase <branch>
```

## 远程操作

```
$ ssh -T <url>
$ git remote
$ git remote -v
$ git remote add <remote> <url>
$ git pull
$ git pull <remote> <remote branch>
$ git push
$ git push <remote> <remote branch>
$ git push -f <remote> <remote branch> #-f meaning is force
$ git push <remote> <local branch>:<remote branch>
$ git push --set-upstream <remote> <remote branch> #Associate the current branch to a remote branch
$ git push <remote> --delete <remote branch>
$ git push -f #forced push
$ git fetch <remote> <remtoe branch>:<local branch>
```