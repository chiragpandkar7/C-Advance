# Assignment 9: Vector-Based Sequential Containers
Welcome to the Vector-Based Sequential Containers project! This project is centered around the effective utilization of vectors as the primary sequential containers within the Standard Template Library (STL). The guidelines for this project encourage the application of STL algorithms, lambda functions, and discourage the explicit use of loops (for, while, do/while) or recursion.

## Project Overview
### Objective
* The primary goal of this project is to explore and showcase the efficient use of vectors in various scenarios.
* Vectors, being dynamic arrays with efficient random access and dynamic resizing, are well-suited for specific types of operations when compared to other sequential containers.

## Example Usage
In this project, I have employed the vector container extensively instead of a list.
```cpp
#pragma once
#include <vector>
#include "Triangle.h"

// Class for bounding box around an object
class BBox
{
public:
    // Constructor
    BBox(std::vector<Triangle> triangles);

    // Destructor
    ~BBox();

private:
    // Calculate bounding box function with parameters as a vector of triangles
    void calculateBBox(std::vector<Triangle> triangles);

    // Compare and update function with parameters as three Point3D points
    void compareAndUpdate(Point3D refP, Point3D& min, Point3D& max);

private:
    // Point mMin denotes the minimum point in an object 
    Point3D mMin;

    // Point mMax denotes the maximum point in an object 
    Point3D mMax;

    // Point mMin denotes the center point in an object 
    Point3D mCenter;
