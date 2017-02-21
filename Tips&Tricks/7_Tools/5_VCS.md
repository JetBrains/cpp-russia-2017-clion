# VCS

CLion provides a unified interface for many popular Version Control Systems, ensuring a consistent user experience with: Subversion, Git (including support for multiple working trees) and GitHub, Mercurial, CVS, Perforce (via plugin), TFS.
 
 Use _Settings | Version control_ for fine tuning.

## Version Control tool windows

* Use _Log_ tab to inspect git log, filter commits by branch, author or path, perform simple operations with commits.
* On _Console_ tab you can inspect and troubleshoot the actual git commands that are executed by CLion.
* Use _Local changes_ tab to review your local changes and split them into different change _Changelists_.

## VCS popup

Execute _VCS Operation Popup_ action via `^V` / `Alt+Back Quote` to quickly access the most common VCS operations:
* Commit, revert, or push changes
* Stash/unstash changes
* Quickly create or switch branches
* etc.

## Editor integration

Changes in the current file are displayed on the left gutter:
* you can navigate between them
* inspect or revert not only the whole file, but also a single change.

_Annotate_ action for git shows `git blame` results right in the editor.