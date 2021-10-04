## Author(s)
Part 1
- gauraut (Driver)
- Abhijit Mahalle (Navigator)

Part 2
- Advait Patole(Driver)
- Sameep Pote(Navigator)

# Week_5_PID
[![Build Status](https://app.travis-ci.com/advaitp/Week_5_PID.svg?branch=master)](https://app.travis-ci.com/advaitp/Week_5_PID)
[![Coverage Status](https://coveralls.io/repos/github/advaitp/Week_5_PID/badge.svg?branch=master)](https://coveralls.io/github/advaitp/Week_5_PID?branch=master)
---
# Procedure to install
- Open terminal
```
cd <path to repository>
git clone --recursive https://github.com/gauraut/Week_5_PID.git
cd Week_5_PID
mkdir build
cd build
cmake ..
make
Run program: ./app/shell-app
Run tests: ./test/cpp-test
```
# Building for Code Coverage in local system
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```

# Note
cppcheck might show unused variables. They are being used by the Google test

# Working with Eclipse IDE

Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)

```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/Sameep2808/tdd-exercise-808X.git
```
In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of cpp-boilerplate

```
cd ~/workspace
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../tdd-exercise-808X/
```
# Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> Select "boilerplate-eclipse" directory created previously as root directory -> Finish
# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.
# Build

To build the project, in Eclipse, unfold boilerplate-eclipse project in Project Explorer, unfold Build Targets, double click on "all" to build all projects.
# Run

    In Eclipse, right click on the boilerplate-eclipse in Project Explorer, select Run As -> Local C/C++ Application

    Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)

# Debug

    Set breakpoint in source file (i.e. double click in the left margin on the line you want the program to break).

    In Eclipse, right click on the boilerplate-eclipse in Project Explorer, select Debug As -> Local C/C++ Application, choose the binaries to run (e.g. shell-app).

    If prompt to "Confirm Perspective Switch", select yes.

    Program will break at the breakpoint you set.

    Press Step Into (F5), Step Over (F6), Step Return (F7) to step/debug your program.

    Right click on the variable in editor to add watch expression to watch the variable in debugger window.

    Press Terminate icon to terminate debugging and press C/C++ icon to switch back to C/C++ perspetive view (or Windows->Perspective->Open Perspective->C/C++).

# Plugins

- CppChEclipse

   - To install and run cppcheck in Eclipse

      -  In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse. Set cppcheck binary path to "/usr/bin/cppcheck".

      - To run CPPCheck on a project, right click on the project name in the Project Explorer and choose cppcheck -> Run cppcheck.

- Google C++ Sytle

      - To include and use Google C++ Style formatter in Eclipse

      -  In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. Import eclipse-cpp-google-style and apply.

      -  To use Google C++ style formatter, right click on the source code or folder in Project Explorer and choose Source -> Format

- Git

    It is possible to manage version control through Eclipse and the git plugin, but it typically requires creating another project. If you're interested in this, try it out yourself and contact me on Canvas.

