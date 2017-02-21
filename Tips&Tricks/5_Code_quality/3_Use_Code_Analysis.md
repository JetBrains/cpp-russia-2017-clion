# Code quality

## Use code analysis
Built-in static code analysis (including Data Flow Analysis) for all supported languages highlights warnings and errors in the code immediately as you type and suggests quick-fixes.

* Go to _Collisions.cpp_ file via `⇧⌘O` / `Shift+Ctrl+N`
* In the _applyCollision_ function find several possible issues highlighted by CLion
    * Not all switch cases are handled – use `⌥Enter` / `Alt+Enter` to invoke a Quick Fix and add missing switch case
    * Conditions is always false when reached – change the condition to `(mulX == -1 || mulY == -1)`
    
Now you can run the unit tests again and check all are green (passed).