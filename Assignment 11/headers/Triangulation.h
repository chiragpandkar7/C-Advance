#pragma once
#include <vector>
#include<map>
#include "Triangle.h"
#include "BBox.h"

// Triangulation class representing a collection of triangles and their bounding box.
class Triangulation
{
public:
    // Constructor that takes a vector of triangles to initialize the triangulation.
    Triangulation(std::vector<Triangle> triangles);

    // Destructor for the Triangulation class.
    ~Triangulation();

    // Getter method to retrieve the vector of triangles.
    std::vector<Triangle> getTriangles();
    double getPerimeterOfTriangle(int);

private:
    std::vector<Triangle> mTriangles; // Vector storing the triangles of the triangulation.
    BBox mBBox; // Bounding box for the triangulation.
};
