#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"
#include<cmath>

// Implementation of Triangulation class
Triangulation::Triangulation(std::vector<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

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

// Method to get Triangles in the form of vector
std::vector<Triangle> Triangulation::getTriangles()
{
    return mTriangles;
}