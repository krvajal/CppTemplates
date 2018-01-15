cmake_minimum_required(VERSION 3.2)
project(CppLondonTemplates)

add_executable(verifysuccess Templates.cpp)
set_target_properties(verifysuccess PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
)
