cmake_minimum_required(VERSION 3.27)
project(cpp_codes)

set(CMAKE_CXX_STANDARD 17)

# List all source files with their respective executable names
set(SOURCE_FILES
        main.cpp
        cppsamples.cpp
        cmake-build-debug/cppdtypes.cpp
        cppenum.cpp
        cppstructure.cpp
        cppcontrolflow.cpp
        cpploops.cpp
        cpppaterns.cpp
        cpppyramid.cpp
        "pyramid using 2 for loops.cpp"
        "right to left half pyramid.cpp"
        "inverted pyramid.cpp"
        "mirror image pattern.cpp"
        "diamond pattern.cpp"
        "up arrow pattern.cpp"
        "My Leetcode/palindrome number.cpp"
        "My Leetcode/roman to integer.cpp"
)

# Loop through each source file and create an executable
foreach(SRC_FILE IN LISTS SOURCE_FILES)
    # Get the filename without directory and extension
    get_filename_component(EXEC_NAME ${SRC_FILE} NAME_WE)

    # Replace any spaces or hyphens with underscores to ensure valid executable names
    string(REPLACE " " "_" EXEC_NAME ${EXEC_NAME})
    string(REPLACE "-" "_" EXEC_NAME ${EXEC_NAME})

    # Add the executable
    add_executable(${EXEC_NAME} ${SRC_FILE})

    # If there are additional dependencies or include directories for specific files,
    # you can set them here using target_link_libraries or target_include_directories
endforeach()
