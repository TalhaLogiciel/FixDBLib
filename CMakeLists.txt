cmake_minimum_required(VERSION 3.5)
project(FixDBLib)



include_directories(${PROJECT_SOURCE_DIR}../API/FIX.OutProcessAPI/)
#include_directories(${PROJECT_SOURCE_DIR}/include)

message("Directory: ***************************"${PROJECT_SOURCE_DIR})

#add_executable(FixDBLib main.cpp)

add_subdirectory(src)


#target_link_libraries()