# Sketcher Writer Implementation
## Overview
This section details the implementation of the `Writer` class's `write` method, which writes triangle data to an output file. The method takes a file path and a vector of triangles as parameters.

## Function Implementation
### Method: `write`
#### Function Signature

```cpp
void Writer::write(std::string filePath, std::vector<Triangle>& triangles)
Description
This method writes the coordinates of each vertex of the triangles in the provided vector to an output file. It ensures that the triangles are properly closed by repeating the coordinates of the first vertex.
``` 
#### Parameters ####
- filePath: A string representing the file path where the triangle data will be written.
- triangles: A vector of Triangle objects containing the geometric data.

## Code Snippet ##
```
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
```

