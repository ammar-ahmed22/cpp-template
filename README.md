# C++ Template
Basic template for C++ projects. Implements CMake for compiling. 

## Requirements
- Install CMake
> use `brew install cmake`

## How to use?
Clone the repo:
```bash
git clone https://github.com/ammar-ahmed22/cpp-template.git
```

Change directory
```bash
cd cpp-template
```

Create build directory
```bash
mkdir build
```

Compile and build
```bash
cmake -S . -B ./build && cmake --build ./build
```

Run the executable
```bash
./build/Project
```