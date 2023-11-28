#include "../headers/Point3D.h"
#include "../headers/Reader.h"
#include <iostream>
#include <sstream>
#include <fstream>

// Implementation of Reader class
Reader::Reader(std::string filePath)
{
    mFilePath = filePath; // Initialize the file path when constructing the Reader object.
}

Reader::~Reader()
{
    // Destructor for Reader.
}

//function to validate the string
std::string Reader::validateFile(std::string str){
    std::string msg = "valid";
    //mutable lambda for changing the message from valid to invalid
    auto invalid = [&msg]() mutable
    {
        msg = "invalid";
        return msg;
    };
    for(auto it = str.begin() ; it != str.end() ; it++){
        if(ispunct(*it)) return invalid();
    }
    return msg;
}

// Method to extract triangle data from an STL file.
void Reader::getTriangles(std::vector<Triangle>& triangles) 
{
    std::ifstream dataFile;
    dataFile.open(mFilePath);

    // Check if the file is successfully opened.
    if (!dataFile.is_open()) { 
        std::cout << "File not exist" << std::endl;
        return;
    }

    std::string line;

    // Read the file line by line.
    while (std::getline(dataFile, line)) 
    {
        std::cout << line << std::endl;

        if(validateFile(line) == "invalid") return;
        // Check if the line contains the keyword "vertex" indicating vertex information.
        if (line.find("vertex") != std::string::npos) 
        {
            std::istringstream iss(line);
            std::string token;
            double x, y, z;

            // Extract the x, y, and z coordinates from the line.
            iss >> token >> x >> y >> z;

            // Create a Point3D object representing the first vertex.
            Point3D point1(x, y, z);

            // Read the next line for the second vertex.
            std::getline(dataFile, line);
            std::cout << line << std::endl;
            std::istringstream iss1(line);
            iss1 >> token >> x >> y >> z;

            // Create a Point3D object representing the second vertex.
            Point3D point2(x, y, z);

            // Read the next line for the third vertex.
            std::getline(dataFile, line);
            std::cout << line << std::endl;
            std::istringstream iss2(line);
            iss2 >> token >> x >> y >> z;

            // Create a Point3D object representing the third vertex.
            Point3D point3(x, y, z);

            // Create a Triangle object using the three vertices and add it to the vector.
            Triangle triangle(point1, point2, point3);
            triangles.push_back(triangle);
        }
    }

    // Close the file after reading.
    dataFile.close();
}
