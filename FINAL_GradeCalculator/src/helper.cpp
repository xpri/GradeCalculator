#include "helper.h"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

void GradeCalculator()
{
    std::vector<std::string> names_of_categories;
    std::vector<int> weights_of_categories;

    std::string course_name;
    std::cout << "Please enter the class name that you are calculating your grade for: ";
    std::getline(std::cin, course_name);
    std::cout << "Great! Calculator for course \"" << course_name << "\" created!\n" << std::endl;

    int num_of_categories;
    std::cout << "How many weights are there for each grading category (e.g. 3 if you have homework, exam, and a final project)" << std::endl;
    std::cin >> num_of_categories;
    std::cin.ignore();
    // std::cout << std::endl;

    for (int i = 0; i < num_of_categories; i++)
    {
        int temp_for_weigths;
        std::string temp_for_names;
        std::cout << "\nEnter category " << i + 1 << ": ";
        std::getline(std::cin, temp_for_names);

        std::cout << "Enter weight (in percentage) " << i + 1 << ": ";
        std::cin >> temp_for_weigths;
        std::cin.ignore();
        
        weights_of_categories.push_back(temp_for_weigths);
        names_of_categories.push_back(temp_for_names);
    }

    double final_grade = 0.0;
    
    // Changed loop counter type to unsigned int to match vector.size() return type
    for (unsigned int i = 0; i < names_of_categories.size(); i++)
    {
        std::cout << "\n--- Entering scores for " << names_of_categories[i] << " (Weight: " << weights_of_categories[i] << "%) ---\n";

        int num_of_items;
        std::cout << "How many items are in " << names_of_categories[i] << "? ";
        std::cin >> num_of_items;
        std::cin.ignore();

        double category_sum = 0.0;
        for (int j = 0; j < num_of_items; j++)
        {
            double score;
            std::cout << "Enter score " << j + 1 << ": ";
            std::cin >> score;
            category_sum += score;
        }

        // Calculate average for this category
        double category_average = (num_of_items > 0) ? (category_sum / num_of_items) : 0.0;

        // Calculate weighted contribution
        double weighted_contribution = category_average * (weights_of_categories[i] / 100.0);

        std::cout << "Average for " << names_of_categories[i] << ": " << std::fixed << std::setprecision(2) << category_average << "%\n";
        std::cout << "Weighted value: " << std::fixed << std::setprecision(2) << weighted_contribution << "%\n";
        
        // Add to the final grade calculation
        final_grade += weighted_contribution;
    }


    printSectionHeader("Final Grade Calculation for " + course_name);
    std::cout << "Your final calculated grade is: "<< std::fixed << std::setprecision(2) << final_grade << "%\n";
    std::cout << std::string(60, '=') << std::endl;
    // printSectionHeader("");
}

void printSectionHeader(const std::string& title)
{
    std::cout << std::string(60, '=') << std::endl;
    std::cout << title << std::endl;
    std::cout << std::string(60, '=') << std::endl;
}
