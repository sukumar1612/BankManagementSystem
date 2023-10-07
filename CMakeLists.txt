cmake_minimum_required(VERSION 3.26)
project(BankManagementSystem)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(BankManagementSystem ${SOURCES})