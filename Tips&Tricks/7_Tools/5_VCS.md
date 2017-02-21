# VCS

CLion includes integration with for most modern version control systems (git, SVN, Perforce, etc). It works out of the box, use _Settings | Version control_ for fine tuning.

## Version Control tool windows

Use _Log_ tab to inspect git log, filter commits by branch, author or path, perform simple operations with commits. On _Console_ tab you can inspect and troubleshoot the actual git commands that are executed by CLion. Use _Local changes_ tab to review your local changes and split them into different change _Changelists_.

## VCS popup

Execute _VCS Operation Popup_ action to quickly access to most common VCS operations:
* Commit, revert, or push changes
* Stash/unstash changes
* Quickly create or switch branches
* etc.

## Editor integration

Changes in the current file are displayed on the left gutter, you can navigate between them, inspect or revert not only the whole file, but also a single change. _Annotate_ action for git shows `git blame` results right in the editor.