#include "helper.h" // Include the header file for your functions
#include <iostream>
#include <string>
#include <cstdlib> // For EXIT_SUCCESS

int main()
{
    system("clear"); //Clears the terminal of any junk beforehand.
    std::string title = "Welcome to my grade calculator program!";

    // These functions are now defined in helper.cpp but declared in helper.h
    printSectionHeader(title); 
    GradeCalculator();
    
    return EXIT_SUCCESS;
}
