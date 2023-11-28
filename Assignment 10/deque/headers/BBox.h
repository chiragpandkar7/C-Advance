#pragma once
#include <deque>
#include "Triangle.h"

// Bounding Box class to represent an axis-aligned bounding box around a set of triangles.
class BBox
{
public:
    // Constructor taking a deque of triangles to initialize the bounding box.
    BBox(std::deque<Triangle> triangles);

    // Destructor to clean up resources if needed.
    ~BBox();

private:
    // Private function to calculate the bounding box based on a deque of triangles.
    void calculateBBox(std::deque<Triangle> triangles);

    // Private function to compare a point with the current min and max values and update them accordingly.
    void compareAndUpdate(Point3D refP, Point3D& min, Point3D& max);

private:
    Point3D mMin;    // Minimum corner of the bounding box.
    Point3D mMax;    // Maximum corner of the bounding box.
    Point3D mCenter; // Center of the bounding box.
};
