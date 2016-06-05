aux_source_directory(. SOURCE_FILE_LIST)

add_library(mubird ${SOURCE_FILE_LIST})
target_link_libraries(mubird gflags glog)

install(FILES "mubird.h"
    DESTINATION ${PROJECT_BINARY_DIR}/mubird/include/mubird)
