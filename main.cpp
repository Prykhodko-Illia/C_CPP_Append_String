#include <iostream>
#include <windows.h>

int main() {

    typedef char *(*append_string_t)(char *, const char *);

    HINSTANCE handle = LoadLibrary(TEXT("..//append_string.dll"));
    if (handle == nullptr || handle == INVALID_HANDLE_VALUE) {
        std::cout << "Lib not found" << std::endl;
        return 1;
    }

    append_string_t append_string = (append_string_t)GetProcAddress(handle, TEXT("append_string"));
    if (append_string == nullptr) {
        std::cout << "The function is not found";
        return 1;
    }

    char *dest = new char[12] {"ASD kulia: "};

    dest = append_string(dest, "poert esid kilorem");
    std::cout << dest << std::endl;

    return 0;
}