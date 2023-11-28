# Assignment 6 - Mutable lambda #
## Overview ##
This assignment involves utilizing a lambda expression in the /src/Reader.cpp file to define a function named validateFile. The lambda expression returns a string which tells that the current string in file is valid or not.
## Updated Function Definition ##
### Function File: ###
* Function Definition: /src/Reader.cpp funtion void Reader::validateFile(std::string) 
## Code snippet ##

`std::string msg = "valid";
      //Mutable lambda for changing the message from valid to invalid
    auto invalid = [&msg]() mutable
    {
        msg = "invalid";
        return msg;
    };`
    

## Implementation ##
* validateFile Function
The validateFile function is designed to validate a given string, checking for the presence of punctuation. It utilizes a mutable lambda expression to change the validation message from "valid" to "invalid".
