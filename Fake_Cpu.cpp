#include <iostream>
#include "FCPU.hpp"

int main() {
    std::string ptr = "input.txt";
    FCPU obj;
    obj.get(ptr);
    return 0;
}