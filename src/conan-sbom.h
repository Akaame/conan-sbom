#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CONAN_SBOM_EXPORT __declspec(dllexport)
#else
  #define CONAN_SBOM_EXPORT
#endif

CONAN_SBOM_EXPORT void conan_sbom();
CONAN_SBOM_EXPORT void conan_sbom_print_vector(const std::vector<std::string> &strings);
