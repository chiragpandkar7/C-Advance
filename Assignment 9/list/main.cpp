#include<iostream>
#include<list>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    std::list<Triangle> triangles;
    Reader reader("resource/cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::list<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);


    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
}