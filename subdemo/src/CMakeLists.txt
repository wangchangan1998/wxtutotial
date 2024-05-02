# This file make up lib and its interface
# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.
# file(GLOB_RECURSE HEADER_LIST CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/include/*.hpp)
file(GLOB HEADER_LIST CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/include/subdemo/*.hpp)

# sources
file(GLOB_RECURSE SOURCE_LIST CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
# Make an automatic library - will be static or dynamic based on user setting, so
# we left it with neither STATIC nor SHARED
add_library(libsubdemo ${SOURCE_LIST} ${HEADER_LIST})

# We need this directory, and users of our library will need it too, so set it to PUBLIC
target_include_directories(libsubdemo PUBLIC ../include)

# This depends on (header only) boost
# target_link_libraries(libsubdemo PRIVATE Boost::boost)

# All users of this library will need at least C++11
target_compile_features(libsubdemo PUBLIC cxx_std_17)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})


