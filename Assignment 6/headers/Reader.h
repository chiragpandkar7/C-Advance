#pragma once
#include <vector>
#include <string>
#include "Triangle.h"

// Reader class for reading triangle data from an STL file.
class Reader {
public:
    // Constructor that takes the file path as an argument.
    Reader(std::string filePath);

    // Destructor for the Reader class.
    ~Reader();

    // Method to extract triangle data from an STL file and populate a vector of triangles.
    void getTriangles(std::vector<Triangle>& triangles);
    std::string validateFile(std::string);

private:
    std::string mFilePath; // File path to the STL file.
};
