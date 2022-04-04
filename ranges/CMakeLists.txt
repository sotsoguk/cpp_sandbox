cmake_minimum_required(VERSION 3.15)
project(sandbox_ranges VERSION 0.1.0)

set(SRC_DIR src)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(NO_OUTPUT_DIRS)

add_executable(demo1 ${SRC_DIR}/demoRange1.cpp)

target_link_libraries(demo1
    PRIVATE
        ${LIBS} ${CONAN_LIBS})
# target_link_libraries(camViewe)
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
