cmake_minimum_required(VERSION 3.10)
project(ClangTidyTesting VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_1.0_COMPILER clang++)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR} CACHE PATH "Installation Directory" FORCE)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CERT_DIR} CACHE PATH "Install Certs" FORCE)

add_executable(clangtest1 clangtest1.cpp)
install(TARGETS clangtest1 DESTINATION bin)
