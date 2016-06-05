set(THIRD_PARTY_TARBALL_DIR "${THIRD_PARTY_SOURCE_DIR}/tarballs")

include(ExternalProject)

ExternalProject_Add( gflags_proj
    URL ${THIRD_PARTY_TARBALL_DIR}/gflags-2.1.2.tar.gz
    CONFIGURE_COMMAND cmake -DCMAKE_INSTALL_PREFIX=${THIRD_PARTY_BINARY_DIR} .
    BUILD_IN_SOURCE 1
)

ExternalProject_Add( glog_proj
    DEPENDS gflags_proj
    URL ${THIRD_PARTY_TARBALL_DIR}/glog-0.3.4.tar.gz
    CONFIGURE_COMMAND ./configure --prefix=${THIRD_PARTY_BINARY_DIR} --disable-shared
    BUILD_IN_SOURCE 1
)
