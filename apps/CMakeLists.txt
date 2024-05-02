# generate executable and link it against libs
# exe
aux_source_directory(. srcs)

add_executable(appminimal ${srcs})

target_link_libraries(appminimal PRIVATE libmy ${wxWidgets_LIBRARIES})