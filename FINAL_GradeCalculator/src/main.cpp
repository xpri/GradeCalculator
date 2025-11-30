#include <iostream>
#include <vector>

void GradeCalculator()
{
    std::vector<std::string> names_of_categories;   // Size of zero. For the different types of names.
    std::vector<int> weights_of_categories;   // Size of zero


    std::string course_name;
    std::cout << "Please enter the class name that you are calculating your grade for: ";
    std::getline(std::cin, course_name);
    std::cout << "Great! Calculator for course: " << course_name << " created!\n" << std::endl;

    // Now time to calculate the actaul grades.

    int num_of_categories;
    std::cout << "How many weights are there for each grading category (e.g. 3 if you have homework, exam, and a final project)" << std::endl;
    std::cin >> num_of_categories;
    std::cin.ignore();
    std::cout << std::endl;


    for (int i = 0; i < num_of_categories; i++)
    {
        int temp_for_weigths;
        std::string temp_for_names;
        std::cout << "Enter category " << i + 1 << ": ";
        std::getline(std::cin, temp_for_names);

        std::cout << "Enter weight (in percentage) " << i + 1 << ": ";
        std::cin >> temp_for_weigths;
        std::cin.ignore();
        
        weights_of_categories.push_back(temp_for_weigths);
        names_of_categories.push_back(temp_for_names);
    }

    for (int i = 0; i < names_of_categories.size(); i++)
    {
        std::cout << "How many different items are in" << names_of_categories[i] << "?" << std::endl;
    }
    
}

void printSectionHeader(const std::string& title)
{
    std::cout << std::string(60, '=') << std::endl;
    std::cout << " " << title << std::endl;
    std::cout << std::string(60, '=') << std::endl;
}

int main()
{
    std::string title = "Welcome to my grade calculator program!";

    printSectionHeader(title);

    GradeCalculator();
    
    return EXIT_SUCCESS;
}