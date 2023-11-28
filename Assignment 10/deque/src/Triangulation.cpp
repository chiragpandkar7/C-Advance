#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"

// Implementation of Triangulation class
Triangulation::Triangulation(std::deque<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

// Method to get Triangles in the form of deque
std::deque<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}