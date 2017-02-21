# Code quality
This code has a bug. In _Collisions.cpp_ in _applyCollision_ the condition of the _if_ statement is wrong. But how could we possible notice and catch it?

## Test and debug
Let's run the unit tests again:
* Select configuration (_arkan9Test_) and run it with `^⌥R` / `Shift+Alt+F10`

Notice, there is one tests that fails - _Collisions.Apply_. We'll now try to debug it:

* Toggle a breakpoint at _applyCollision_ call in the _Collisions.Apply_ test
* Debug currently selected configuration with `^D` / `Shift+F9`
* Select configuration (_arkan9Test_) and debug it with `^⌥D` / `Shift+Alt+F9`
* Execution will stop at a breakpoint

### Variables view and Evaluate expressions
* Now let's step into the function by pressing `⌥⇧F7` / `Shift+Alt+F7`
    * While stepping through the code you can inspect variable values in the Variables view in Debug window, or right in the editor!
* When you come to an _if_ statement in the _applyCollision_ function, let's evaluate the `QPointF(b.getSpeed().x() * mulX, b.getSpeed().y() * mulY)`
    * Use `⌥F8` / `Alt+F8` to evaluate expressions
    * Insert `QPointF(b.getSpeed().x() * mulX, b.getSpeed().y() * mulY)`
    * Press Enter and inspect the result
    * Use `⇧⌘Enter` / `Shift+Ctrl+Enter` to add the expression to the Watches to track the changes continuously

Still not clear where the error is? Let's try to rely on code analisys.
