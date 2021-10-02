cd <path to repository>
mkdir build
cd build
cmake ..
make
Run program: ./app/shell-app
Run tests: ./test/cpp-test
#cppcheck might show unused variables. They are being used by the Google test
