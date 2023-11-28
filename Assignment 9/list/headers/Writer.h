#pragma once
#include<list>
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

    // Method to write the list of triangles to a specified file.
    void write(std::string filePath, std::list<Triangle>& triangles);

};
