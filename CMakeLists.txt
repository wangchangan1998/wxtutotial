#############################################################################
# Name:        miniapp/CMakeListst.txt
# Purpose:     manage minimal appication
# Author:      AICA
# Created:     2024-03-03
# Copyright:   QLUUOT
# Licence:     MIT
#############################################################################

# Declare the minimum required CMake version
cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# FindXX.cmake
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# set(wxWidgetsComponentsRequired media xrc richtext propgrid ribbon stc html aui core net xml base)
# Note that for MinGW users the order of libs is important!
find_package(wxWidgets 3.2 REQUIRED COMPONENTS core base)
if(wxWidgets_FOUND)
  include(${wxWidgets_USE_FILE})
  # and for each of your dependent executable/library targets:
#   target_link_libraries(<YourTarget> ${wxWidgets_LIBRARIES})
endif()

# project
project(minimal)

# Define a variable containing a list of source files for the project
# add_subdirectory(apps)
# add_subdirectory(src)
add_subdirectory(subdemo)
