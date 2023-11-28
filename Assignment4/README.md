 # Assignment 4: File workshop part two #
## Overview ##
* This program reads data from a file named languages.txt and populates a vector of language objects based on the provided type definition. It then prints out the data in a specific format.
## Instructions ##
* Clone Repository: git clone 
## Compile the Program: ##
g++ main.cpp -o language_processor

## Run the Program: ##
./language_processor

## Output: ##
The program reads the data from languages.txt, processes it, and prints the results.

## Example Output ##
C++, Stroustrup, 1979 Java, Gosling, 1991

## Code Structure ##
* header folder
  * BBox.h
  * Geometry.h
  * Point3d.h
  * Reader.h
  * Triangle.h
  * Triangulation.h
  * Typedef.h
  * Triangle.h
* src folder
  * BBox.cpp
  * Geometry.cpp
  * Point3d.cpp
  * Reader.cpp
  * Triangle.cpp
  * Triangulation.cpp
  * Typedef.cpp
  * Triangle.cpp
* main.cpp: Main program file containing the implementation.
* languages.txt: Input file containing language data.
## Implementation Details ##
* In this assignment, the strings in input file contains both words and numbers, so inside if condition in reader.cpp file, we have used isstringstream which takes string with numbers and words and extracts the numbers from it.
## Dependencies
* C++ compiler (e.g., g++)
