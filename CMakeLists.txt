# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project (docker-test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include sub-projects.
add_subdirectory (docker-test-library)

link_directories (${PROJECT_BINARY_DIR}/docker-test-library)

add_executable (docker-test "main.cpp")

target_link_libraries (docker-test PUBLIC 
                       docker-test-library)

target_include_directories (docker-test
                            PUBLIC ${PROJECT_SOURCE_DIR}/docker-test-library
                            PRIVATE ${PROJECT_BINARY_DIR})
