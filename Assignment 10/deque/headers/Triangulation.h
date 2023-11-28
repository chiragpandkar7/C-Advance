#pragma once
#include <deque>
#include "Triangle.h"
#include "BBox.h"

// Triangulation class representing a collection of triangles and their bounding box.
class Triangulation
{
public:
    // Constructor that takes a deque of triangles to initialize the triangulation.
    Triangulation(std::deque<Triangle> triangles);

    // Destructor for the Triangulation class.
    ~Triangulation();

    // Getter method to retrieve the deque of triangles.
    std::deque<Triangle> getTriangles();

private:
    std::deque<Triangle> mTriangles; // deque storing the triangles of the triangulation.
    BBox mBBox; // Bounding box for the triangulation.
};
