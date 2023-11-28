# Assignment 7 - Generalized capture with initialization #
## Overview ## 
* This assignment involves utilizing a lambda expression in the /src/BBox.cpp file to print minimum, maximum and center point of bounding box.
* This can be done using lambda function
## Updated Function Definition ##
### Function File: ###
* Function Definition: /src/BBox.cpp
* funtion: void BBox::calculateBBox(std::vector<Triangle> triangles)
* 
## Lambda Expression: ##
* Define a lambda expression inside the function named printPoint which prints the min, max and center point of bounding box.
* It takes input as one point and prints its x, y, z coordintates.

## Code snippet ##

   ``` // lambda function to print points
   auto printPoint = [](Point3D point)
   {
        std::cout << point.x() << " " << point.y() << " " << point.z() << std::endl;
   };
   
   // printing min, max and center
   printPoint(mMin);
   printPoint(mMax);
   printPoint(mCenter);
