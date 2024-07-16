#include "conan-sbom.h"
#include <vector>
#include <string>

int main() {
    conan_sbom();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    conan_sbom_print_vector(vec);
}
