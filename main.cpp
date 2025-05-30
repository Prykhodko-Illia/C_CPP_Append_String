#include <iostream>
#include "append_string.h"

int main() {
    char *dest = new char[12] {"ASD kulia: "};

    dest = append_string(dest, "poert esid kilorem");
    std::cout << dest << std::endl;

    return 0;
}