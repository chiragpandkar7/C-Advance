#pragma once
#include <list>
#include "Triangle.h"
#include "BBox.h"

// Triangulation class representing a collection of triangles and their bounding box.
class Triangulation
{
public:
    // Constructor that takes a list of triangles to initialize the triangulation.
    Triangulation(std::list<Triangle> triangles);

    // Destructor for the Triangulation class.
    ~Triangulation();

    // Getter method to retrieve the list of triangles.
    std::list<Triangle> getTriangles();

private:
    std::list<Triangle> mTriangles; // Vector storing the triangles of the triangulation.
    BBox mBBox; // Bounding box for the triangulation.
};
