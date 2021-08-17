# Running CMake (UNIX or WSL (Windows Subsystem for Linux) )
To run cmake to build the c++ projects use the following commands
1. `$ cd FOLDER_NAME`
2. `$ cmake . -B build`

To run the built cpp file use the folloing commands (assuming you are in the build folder)
1. `$ make`
2. `$ ./FILE_NAME`

Everytime a change is made to one of the .cpp or .h files, you only need to follow the above steps of `$ make` and `$ ./FILE_NAME`

## An Example
1. `$ cd HelloWorld`
2. `$ cmake . -B build`
3. `$ make`
4. `$ ./ABRO`

# Using VS Code 
The other option is to install the cmake extension for the vscode market place. From here you can 'configure' the folder for cmake. Incase this is not a pop up notification for you, you can manually start the auto configure process by pressing " ctrl + shift + p" and then typing 'configure'. You will see the "CMake: configure" option. Click this and follow the on screen instructions

# Using Windows 
You will need to install something that will allow you to compile cpp files. This is typically gcc or g++. Common tools used for this other than WSL is either "cygwin" or "mingw". After installing one of these tools, you can either use the VS Code method, or open up a cygwin/mingw terminal and follow the UNIX instructions