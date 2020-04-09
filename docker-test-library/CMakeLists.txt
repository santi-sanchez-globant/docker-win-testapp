# CMakeList.txt : CMake project for docker-test-library, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

include_directories (${PROJECT_BINARY_DIR})

include (GenerateExportHeader)

add_library (docker-test-library SHARED "docker-test-library.cpp")

generate_export_header (docker-test-library
    BASE_NAME docker-test-library
    EXPORT_MACRO_NAME docker-test-library_EXPORT
    EXPORT_FILE_NAME docker-test-library_Export.h
    STATIC_DEFINE docker-test-library_BUILT_AS_STATIC)

#file (COPY ${PROJECT_BINARY_DIR}/docker-test-library/docker-test-library.dll
#      DESTINATION ${PROJECT_BINARY_DIR})
