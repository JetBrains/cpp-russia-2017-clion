# Documentation

## Document the code using Doxygen format
In the C++ world [Doxygen](http://doxygen.org/) is quite a popular tool for documenting the code. Doxygen-style comments can be placed across the source code and used for generating full-fledged documentation in various formats.

### Create documentation
To keep the code well-documented with ease, use Doxygen comment stubs generation:

* Go to file _Collisions.h_ via `⇧⌘O` / `Shift+Ctrl+N`
* To provide missing documentation for the functions _getCollisionWithWalls_ and _getCollisionWithBrick_, place a caret before _getCollisionWithWalls_ declaration, type _///_ ( or _/**_, _/*!_, _///_, _//!_) and press `Enter`
* A stub with _\brief_, _\param_ and _\return_ tags will be generated
* Go to _Settings | Editor | Code Style | C/C++ | Code Generation tab_ and find Documentation comments settings there
    * Uncheck _@brief_ tag option, try generating the stub again
    * Try other options

### Update documentation
Let's assume the documentation exists already. What if the code is updated (for example, parameters are renamed)?

* Go to _applyCollision_ function declaration in _Collisions.h_
* Rename parameter _b_ to _ball_ – use refactoring Rename via `⇧F6` / `Shift+F6`
* The parameter in Doxygen comment is updated as well
