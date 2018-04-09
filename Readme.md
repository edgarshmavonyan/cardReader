# Universal cards storage reader API
## 1. Required dependencies:

 * cmake 3.8 (or higher)
 * c++ compiler with c++14 support
 * doxygen, if you want to have html/latex documentation
It can be installed via apt:
```bash
sudo apt install doxygen
```
## 2. How to build:
### There are 2 flags controlling build type
#### 1. BUILD_TESTS=ON/OFF
##### If OFF, only static library of API is built
##### If ON, builds subproject test, where 12 tests for API are located
##### To start testing, run in bash:
```bash
mkdir Debug
cd Debug
cmake -DBUILD_TESTS=ON ..
make
make test
```
##### Alternatively, instead of 'make test' you can run test/cardReader_test executable.
#### 2. RELEASE=ON/OFF
##### If ON, builds in Release, else in Debug
##### For example:
```bash
mkdir Release
cd Release
cmake -DBUILD_TESTS=OFF -DRELEASE=ON ..
make
```


   


