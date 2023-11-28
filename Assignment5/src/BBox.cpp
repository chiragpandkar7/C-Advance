#include<iostream>
#include "../headers/BBox.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"

//Implementation of Bounding Box class
BBox::BBox(std::vector<Triangle> triangles)
:mMin(0,0,0),
mMax(0,0,0),
mCenter(0,0,0)
{
    calculateBBox(triangles);
}

BBox::~BBox()
{
}

// Method for claculating Bounding box
void BBox::calculateBBox(std::vector<Triangle> triangles)
{

   mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
   mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

   for(Triangle triangle:triangles)
   {
      Point3D p1=triangle.p1();
      Point3D p2=triangle.p2();
      Point3D p3=triangle.p3();

      compareAndUpdate(p1, mMin, mMax);
      compareAndUpdate(p2, mMin, mMax);
      compareAndUpdate(p3, mMin, mMax);
   }

   mCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2);
   std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
   std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
   std::cout<<mCenter.x()<<" "<<mCenter.y()<<" "<<mCenter.z()<<std::endl;
}

// Method to compare and update the points
void BBox::compareAndUpdate(Point3D compare, Point3D& min, Point3D& max)
{      
        if (max.x() < compare.x()) {
            max.setX(compare.x());
        }
        if (max.y() < compare.y()) {
            max.setY(compare.y());
        }
        if (max.z() < compare.z()) {
            max.setZ(compare.z());
        }
        if (min.x() > compare.x()) {
            min.setX(compare.x());
        }
        if (min.y() > compare.y()) {
            min.setY(compare.y());
        }
        if (min.z() > compare.z()) {
            min.setZ(compare.z());
        }
}
