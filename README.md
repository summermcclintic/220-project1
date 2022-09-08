# Project 1: Git & Github
## Summer McClintic

Navigating merge conflicts is an important skill to have when using git. In this project, I created an empty repository and cloned it to my local machine. I then copied over my `Project0.cpp` file from the first project, and added, committed, and pushed it. I then created a new branch called `branch0` and switched to that branch by using the command `git checkout -b branch0`.

While on this new branch, I changed the `Project0.cpp` file by adding a comment right before main. I then went through the same `git add/commit` process, and then ran `git push origin branch0` to update that change. Next, I switched back to the master branch by running `git checkout master`. I then added a comment in a different spot in main, and ran `git add/commit`. Once I ran `git push origin master`, I got this warning from the terminal:
```
CONFLICT (content): Merge conflict in Project0.cpp
Automatic merge failed; fix conflicts and then commit the result.
```

In order to fix this merge conflict, I opened up the `Project0.cpp` file in Atom. In the editor, I could see a `HEAD` section which contained the place where I added the comment in the master branch, and a `branch` section with the comment I made on `branch0`. To fix the conflict, I decided to keep both comments since they were on separate lines. I then used `git add/commit/push origin master` and successfully pushed the corrected file to GitHub.

The last thing I did was switched back to `branch0` and ran `git pull origin master` to get the updated `Project0.cpp` file. This made sure both of my branches had the latest version of `Project0.cpp` that I wanted.

Here are the resources I used for git:

[Basic git commands](https://docs.github.com/en/get-started/using-git/about-git)

[Branches in git](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging)

[Solving git merge conflicts](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/addressing-merge-conflicts/resolving-a-merge-conflict-using-the-command-line)
