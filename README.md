# Week_5_PID
## Author(s)
- gauraut (Driver)
- Abhijit Mahalle (Navigator)
# Process to build in Terminal
In the terminal window:
- cd <path to repository>
- mkdir build
- cd build
- cmake ..
- make
- Run program: ./app/shell-app
- Run tests: ./test/cpp-test
#cppcheck might show unused variables. They are being used by the Google test

# C++ Boilerplate
  ![Build Status](https://app.travis-ci.com/gauraut/Week_5_PID.svg?branch=master)
[![Coverage Status](https://coveralls.io/repos/github/gauraut/Week_5_PID/badge.svg?branch=master)](https://coveralls.io/github/gauraut/Week_5_PID?branch=master)
---
# Building for Code Coverage in local system

  sudo apt-get install lcov
  cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
  make
  make code_coverage
