#pragma once

// Point3D class representing a point in three-dimensional space.
class Point3D
{
public:
    // Constructor for Point3D, initializes the point with given x, y, and z coordinates.
    Point3D(double inX, double inY, double inZ);

    // Destructor for Point3D.
    ~Point3D();

    // Getter methods to retrieve the x, y, and z coordinates of the point.
    double x();
    double y();
    double z();

    // Setter methods to update the x, y, and z coordinates of the point.
    void setX(double x);
    void setY(double y);
    void setZ(double z);

private:
    double mX; // X-coordinate of the point.
    double mY; // Y-coordinate of the point.
    double mZ; // Z-coordinate of the point.
};
