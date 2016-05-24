aux_source_directory(. SOURCE_FILE_LIST)

add_library(mubird ${SOURCE_FILE_LIST})
target_link_libraries(mubird gflags)
