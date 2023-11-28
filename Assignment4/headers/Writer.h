#pragma once
#include<vector>
#include<string>
#include "Triangle.h"

// Writer class for writing triangle data to an output file.
class Writer
{
public:
    // Constructor for the Writer class.
    Writer();

    // Destructor for the Writer class.
    ~Writer();

    // Method to write the vector of triangles to a specified file.
    void write(std::string filePath, std::vector<Triangle>& triangles);

};
