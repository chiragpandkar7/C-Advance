#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"

// Implementation of Triangulation class
Triangulation::Triangulation(std::vector<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

// Method to get Triangles in the form of vector
std::vector<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}