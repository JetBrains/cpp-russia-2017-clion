# Code quality
This code has a bug. In _Collisions.cpp_ in _applyCollision_ the condition of the _if_ statement is wrong. But how could we possible notice and catch it?

## Test and debug
Let's run the unit tests again:
* Select configuration (_arkan9Test_) and run it with `^⌥R` / `Shift+Alt+F10`

Notice, there is one tests that fails - _Collisions.Apply_. We'll now try to debug it:

* Debug currently selected configuration with `^D` / `Shift+F9`
* Select configuration (_arkan9Test_) and debug it with `^⌥D` / `Shift+Alt+F9`

