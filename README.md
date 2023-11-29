# Implementation of C++ Function Interfacing with C Code

## Overview

This assignment focuses on enhancing program efficiency by implementing a specific part of the code in **C**, which can be referenced through a **C++** file. The primary goal is to accelerate the program by treating a portion of the code as a **C** program.

## Function Declaration and Definition

1. **Function File:**
   - **Function Declaration:** `/src/printMsg.h` contains the code snippet that I aim to implement as a **C** function, accessed through a **C++** file.
   - A macro `#ifdef __cplusplus` is used to identify the inclusion context. If the file is included in a **C++** file, it executes `extern "C" {}`.
   - In the `/src/printMsg.cpp` file, the `void print()` function is implemented as follows:
   ```cpp
   void print()
   {
    printf("Error! No Such File Found!\n");
   }
    ``` 
   - The `print()` function prints an error message.

2. **Usage:**
   - In the `/src/Reader.cpp` file, the aforementioned file is included. The `void Reader::getTriangles(std::vector<Triangle>& triangles)` function utilizes the `void print()` function.
   - When the reader is unable to read the file, it invokes the function to print an error message on the console.
   - The use of the **extern "C"** keyword is crucial to instruct the C++ compiler not to perform name mangling while generating symbols in the **ObjectDump** file.

