cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project("GradeCalculator")

add_executable (${PROJECT_NAME})

# One can combine the target_sources into the add_executable.
# But for the sake of documentation I will keep them seperate.
# Don't forget to specify the scope of the source. i.e. PRIVATE, PUBLIC, or INTERFACE
# For an executable, this must always be PRIVATE
# target_sources(${PROJECT_NAME} "src/main.cpp")
target_sources(${PROJECT_NAME} PRIVATE "src/main.cpp")
