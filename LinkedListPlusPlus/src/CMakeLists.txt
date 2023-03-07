# Relocate generated linkable binaries to the root of the generated build dir
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(llist_plus_plus SHARED LList.cpp)

target_include_directories(llist_plus_plus PRIVATE ${LLIST_SOURCE_DIR}/include)

add_executable(out main.cpp)

target_link_libraries(out PRIVATE llist_plus_plus)

target_include_directories(out PRIVATE ${LLIST_SOURCE_DIR}/include)
