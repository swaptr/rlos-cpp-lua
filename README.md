# rlos-cpp-lua

## How to build
This project contains `lua` as a submodule.
```bash
git clone --recursive git@github.com:swaptr/rlos-cpp-lua.git
```

Run these commands in the root of the directory:
```bash
mkdir build
cd build
cmake ..
make
```

This will generate a binary for our project `exercise`.
This can be run with this following command:
```bash
cd exercise
./exercise
```

Currently works on the following platforms:
- Linux

## Output:
```bash
Swapnil says hello
Value of i: 5
Original value: 5
New value: 10
```
You can find the complete output in the [output](./output) file.
