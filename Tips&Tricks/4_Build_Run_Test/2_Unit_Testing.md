# Build, Run, Test

## Unit Testing
When you want the possible defects to be detected as early as possible, or when you need to constantly check that the new changes are not introducing new bugs, you come to an idea that you need Unit Tests.

Perform unit testing with ease, as CLion integrates with Google Test, one of the most popular C++ testing frameworks.

### Run
* Select configuration (_arkan9Test_) and run it with `^⌥R` / `Shift+Alt+F10`
    * _Collisions.Right_ and _Collisions.Left_ will pass
    * _Collisions.Apply_ will fail
    * Built-in test runner with the results will be opened
* In the built-in test runner, find the button _Rerun Failed Tests_ and use it to rerun _Collisions.Apply_
* To run one test place a cursor on it (_Collisions.Right_) and run it with `^⇧R` / `Shift+Ctrl+F10`. _Note_, temporary configuration is created in this case

_Tip_ Google Test build/run configurations are created in CLion automatically if the corresponding target is linked with _gtest_.

### Test runner
Inspect tests results in built-in test runner view:
* Check the progress bar with the percentage of tests executed so far
* Check the output stream of the tests
* Inspect a tree view of all the tests, including the information about test status and test duration (_Collisions.Apply_ will fail after 1ms, others will pass in 0ms)
* Sort tests alphabetically to find a proper tests easier in the list
* Sort tests by duration to understand which were executed longer than others
* Export test results for the report or future investigations

### Create test
Let's create a test:
* Go to _test.cpp_ (use `⇧⌘O` / `Shift+Ctrl+N` to navigate to the file by its name)
* Press `⌘N` / `Alt+Insert` to generate code
* Select _generate test_, use _Collisions_ as test case name, _Top_ – as a test name
* Add the following code as a test's body:
`    ASSERT_EQ(getCollisionWithBrick(Ball(QPointF(2, 0), QPointF()), QRectF(2, -2, 20, -20)), Top);
`
* Run test via `^⇧R` / `Shift+Ctrl+F10`