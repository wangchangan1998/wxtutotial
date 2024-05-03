# exe
aux_source_directory(. srcs)
file(GLOB HEADER_LIST CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

add_executable(appdemo1 
            # Q.xpm
            # Q.png
            smile.xpm
            ${srcs} 
            ${HEADER_LIST})

target_link_libraries(appdemo1 PRIVATE
                    # libdemo1
                    ${wxWidgets_LIBRARIES})
message("demo1/apps的构建类型" ${CMAKE_BUILD_TYPE})