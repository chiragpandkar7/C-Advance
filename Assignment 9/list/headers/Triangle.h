#pragma once
#include "Point3D.h"

// Triangle class representing a triangle in three-dimensional space.
class Triangle
{
public:
    // Constructor that takes three Point3D objects as vertices to create a triangle.
    Triangle(Point3D p1, Point3D p2, Point3D p3);

    // Destructor for the Triangle class.
    ~Triangle();

    // Getter methods to retrieve the vertices of the triangle.
    Point3D p1();
    Point3D p2();
    Point3D p3();

private:
    Point3D mP1; // First vertex of the triangle.
    Point3D mP2; // Second vertex of the triangle.
    Point3D mP3; // Third vertex of the triangle.
};
