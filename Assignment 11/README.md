# Assignment 11 - Map Container Implementation #
## Overview ## 
* This assignment demonstrates the implementation of a map container.
* A map container is a data structure in the C++ Standard Template Library (STL) that stores data in key-value pairs.
  
## Function Definition ##
*  In the code (src/Triangulation.cpp) file, a function named `getPerimeterOfTriangle` has been created. This function takes the index of a triangle as input and prints its perimeter.
*  Here, the triangle index represents a key, and its perimeter represents a value.
### Function File: ###
* src/Triangulation.cpp
* header/Triangulation.h
* main.cpp 
## Code snippet ##
```
double Triangulation :: getPerimeterOfTriangle(int index)
{
    std::map<int, double> mp;
    for(int i = 0; i < mTriangles.size(); i++)
    {
        Triangle triangle = mTriangles[i];
        double side1 = sqrt(((triangle.p2().x() - triangle.p1().x()) * (triangle.p2().x() - triangle.p1().x())) + ((triangle.p2().y() - triangle.p1().y()) * (triangle.p2().y() - triangle.p1().y())) + ((triangle.p2().z() - triangle.p1().z()) * (triangle.p2().z() - triangle.p1().z())));
        double side2 = sqrt(((triangle.p3().x() - triangle.p2().x()) * (triangle.p3().x() - triangle.p2().x())) + ((triangle.p3().y() - triangle.p2().y()) * (triangle.p3().y() - triangle.p2().y())) + ((triangle.p3().z() - triangle.p2().z()) * (triangle.p3().z() - triangle.p2().z())));
        double side3 = sqrt(((triangle.p3().x() - triangle.p1().x()) * (triangle.p3().x() - triangle.p1().x())) + ((triangle.p3().y() - triangle.p1().y()) * (triangle.p3().y() - triangle.p1().y())) + ((triangle.p3().z() - triangle.p1().z()) * (triangle.p3().z() - triangle.p1().z())));

        mp[i] = side1 + side2 + side3;
    }
    if(index > mTriangles.size())
    {
        return -1;
    }
    return mp[index];
}
```
