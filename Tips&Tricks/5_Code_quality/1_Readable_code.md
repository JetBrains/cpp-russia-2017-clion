# Code quality

## Readable code
Reading the code is as much important as writing it. Let's see how Clion helps improve the readability of the code:

* Go to _Collisions.cpp_ file via `⇧⌘O` / `Shift+Ctrl+N`

### Reformat
* Select code in _getCollisionWithBrick_ function and reformat it by pressing `⌥⌘L` / `Ctrl+Alt+L`

_Note_, the code will follow the rules described in _Settings | Editor | Code Style | C/C++_

### Replace if statement with ternary if operator
The shorter form of ternary operator is often easier to read than the full _if_ statement. That's why CLion suggests you to convert:

* In function _getCollisionWithBrick_ find the _else_ branch
* Replace `if(inters.center().y()<ballBB.center().y())` with ternary operator:
    * Place a cursor there
    * Press `⌥Enter` / `Alt+Enter` and select _Replace if with ?:_
* Repeat for `if(ballBB.center().x()>inters.center().x())`
* Repeat for `if (ballBB.top() < bounding.top())` in _getCollisionWithWalls_ function in the same file

### Merge nested if
After you replace _if_ statements with ternary _if_ operator, you can now merge nested _if_ in _getCollisionWithBrick_ function:

* Press `⌥Enter` / `Alt+Enter` and select _Merge If Else_