# exe
aux_source_directory(. srcs)

add_executable(appsubdemo ${srcs})

target_link_libraries(appsubdemo PRIVATE libsubdemo ${wxWidgets_LIBRARIES})