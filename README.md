## Author(s)
Part 1
- gauraut (Driver)
- Abhijit Mahalle (Navigator)

Part 2
- Advait Patole(Driver)
- Sameep Pote(Navigator)

# Week_5_PID
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
