#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    // Declare a vector to store Triangle objects
    std::vector<Triangle> triangles;

    // Create a Reader object and read triangles from the specified STL file
    Reader reader("resource/cubeModel.stl");
    reader.getTriangles(triangles);

    // Create a Triangulation object and pass the vector of triangles to it
    Triangulation triangulation(triangles);

    // Create a Writer object
    Writer writer;

    // Get the triangles from the triangulation
    std::vector<Triangle> outTriangles = triangulation.getTriangles();

    // Write the triangles to an output file
    writer.write("output.txt", outTriangles);

    // Print the perimeter of the triangle with index 2
    std::cout << "Perimeter of triangle :" << triangulation.getPerimeterOfTriangle(2) << std::endl;

    // Display the message to the user
    std::cout << "Press enter to exit\n";

    // Wait for user input before exiting
    std::cin.ignore();
    std::cin.get();
}