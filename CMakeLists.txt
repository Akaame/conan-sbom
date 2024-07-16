cmake_minimum_required(VERSION 3.15)
project(conan-sbom CXX)

find_package(ZLIB CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)


add_executable(conan-sbom src/conan-sbom.cpp src/main.cpp)

target_link_libraries(conan-sbom PRIVATE ZLIB::ZLIB)
target_link_libraries(conan-sbom PRIVATE fmt::fmt)


install(TARGETS conan-sbom DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
