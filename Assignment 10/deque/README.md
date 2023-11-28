# Assignment 9: Deque-Based Sequential Containers
Welcome to the Deque-Based Sequential Containers project! This project is centered around the effective utilization of deques as the primary sequential containers within the Standard Template Library (STL). The guidelines for this project encourage the application of STL algorithms, lambda functions, and discourage the explicit use of loops (for, while, do/while) or recursion.

## Project Overview
### Objective
* The primary goal of this project is to explore and showcase the efficient use of deques in various scenarios.
* Deques, being dynamic arrays with efficient random access at both ends and dynamic resizing, are well-suited for specific types of operations when compared to other sequential containers.

## Example Usage
In this project, I have employed the deque container extensively instead of a vector.
```cpp
#pragma once
#include <deque>
#include "Triangle.h"

// Class for bounding box around an object
class BBox
{
public:
    // Constructor
    BBox(std::deque<Triangle> triangles);

    // Destructor
    ~BBox();

private:
    // Calculate bounding box function with parameters as a deque of triangles
    void calculateBBox(std::deque<Triangle> triangles);

    // Compare and update function with parameters as three Point3D points
    void compareAndUpdate(Point3D refP, Point3D& min, Point3D& max);

private:
    // Point mMin denotes the minimum point in an object 
    Point3D mMin;

    // Point mMax denotes the maximum point in an object 
    Point3D mMax;

    // Point mMin denotes the center point in an object 
    Point3D mCenter;
