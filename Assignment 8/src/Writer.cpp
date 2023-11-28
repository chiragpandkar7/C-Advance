#include<fstream>
#include "../headers/Writer.h"
#include<iterator>

// Implementation of writer class
Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}

// write method implementation for writing the triangle data in output file
void Writer::write(std::string filePath ,std::vector<Triangle>& triangles)
{
  // Open the output file for writing
  std::ofstream dataFile;
  dataFile.open(filePath);

  // Iterate through each triangle in the vector
  std::vector<Triangle>::iterator it;
  for (it = triangles.begin(); it != triangles.end(); it++)
  {
      // Write the coordinates of the first vertex of the triangle to the file
      dataFile << it->p1().x() << " " << it->p1().y() << " " << it->p1().z() << std::endl;

      // Write the coordinates of the second vertex of the triangle to the file
      dataFile << it->p2().x() << " " << it->p2().y() << " " << it->p2().z() << std::endl;

      // Write the coordinates of the third vertex of the triangle to the file
      dataFile << it->p3().x() << " " << it->p3().y() << " " << it->p3().z() << std::endl;

      // Repeat the first vertex's coordinates to close the triangle in the output file
      dataFile << it->p1().x() << " " << it->p1().y() << " " << it->p1().z() << std::endl;
  }

  // Close the output file
  dataFile.close();
};