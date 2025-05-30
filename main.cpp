#include <iostream>
#include "append_string.c"

int main() {
    char *dest = new char[12] {"Parhnk 12: "};

    // std::cout << dest << std::endl;

    dest = append_string(dest, "kakulya");
    std::cout << dest << std::endl;

    return 0;
}