#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"

// Implementation of Triangulation class
Triangulation::Triangulation(std::list<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

// Method to get Triangles in the form of list
std::list<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}