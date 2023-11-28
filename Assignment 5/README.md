# Assignment 5 - Lambda Expression for Updating Minimum and Maximum Points in Triangulation #
## Overview ##
* This assignment requires the integration of lambda expressions in the /src/BBox.cpp file to define functions named `compMax` and `compMin`. These lambda expressions are employed to obtain the maximum and minimum points from triangulation, crucial for subsequently rendering the bounding box of the geometry.

## Updated Function Definition ##
Function File:
* Function Definition: /src/BBox.cpp *

## Lambda Expressions: ##

Define lambda expressions named `compMax` and `compMin`, each taking two parameters of Point3D objects. The former updates the maximum point to derive the maximum point from triangulation, while the latter updates the minimum point.

## Lambda Expressions in Action: ##

Invoke the lambda expressions `compMax` and `compMin` within the `compareAndUpdate` function in the BBox.cpp file.

## Function Implementation ## 

     // Lambda function for updating the maximum value
     auto compMax = [](Point3D pointToCompare, Point3D& max) {
        if(pointToCompare.x()>max.x())
          max.setX(pointToCompare.x());
          
        if(pointToCompare.y()>max.y())
          max.setY(pointToCompare.y());

        if(pointToCompare.z()>max.z())
          max.setZ(pointToCompare.z());
    };
    // Lambda function for updating the minimum value
    auto compMin = [](Point3D pointToCompare, Point3D& min) {
        if(pointToCompare.x()<min.x())
          min.setX(pointToCompare.x());

      if(pointToCompare.y()<min.y())
          min.setY(pointToCompare.y());

      if(pointToCompare.z()<min.z())
          min.setZ(pointToCompare.z());
    };
