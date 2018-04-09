# Universal cards storage reader API
## 1. Required dependencies:

 * cmake 3.8 (or higher)
 * c++ compiler with c++14 support
 * doxygen, if you want to have html/latex documentation.
It can be installed via apt:
```bash
sudo apt install doxygen
```
## 2. How to build:
### Out-of-source build is strongly recommended!
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
## 3. Use of patterns:
#### 1. Proxy/decorator pattern
##### We used the combination of proxy and decorator pattern to log information for logging useful information when working with credit cards. 
##### The proxy part of it, is that Proxy pattern is usually used to log data (so called LoggerProxy)
##### However, it can't create and delete encapsulated object, so it can be also recognized as Decorator pattern.

#### 2. Facade pattern
##### To provide an easy access to every reader I encapsulated them into cardReaderFacade. It contains shared pointers to readers and can be extended with needed methods and new readers.

#### 3. Singleton pattern (CURRENTLY NOT USED!)
##### If your system has one (physical) reader to one microcomputer, you might want to make cardReaderFacade a singleton. Since it is considered an anti-pattern and makes testing more difficult, this idea is not currently implemented.


