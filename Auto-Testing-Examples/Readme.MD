 
# Running these examples
Before you begin, please ensure cmake is installed. The instructions for using cmake can be found in the Readme.MD under the "HostCodeExamples" folder

## Adding GTest 
Use the following command in the Auto-Testing-Examples
1. `$ git submodule update --init --recursive`

## Running CTest
1. Follow the normal instructions to generate the build file
2. `$ cd build`
3. `$ make`
4. `$ ctest --verbose`

This will run the tests created under the "tests" folder. It will also display whether all tests passed or failed. If they failed, it will show you what it expected vs what it got. Depending on whether you wanted to show other variables or not upon failure, it will do so.

Using `$ ctest` is also valid. However, this will only tell you if you passed all the tests or failed.