#include "append_string.h"

char * append_string(char *dest, const char *source) {
    int i = 0, j = 0;

    char *result = (char *)malloc(sizeof(dest) + sizeof(source));

    while (dest[i] != '\0') {
        result[i] = dest[i];
        i++;
    }

    free(dest);

    while (source[j] != '\0') {
        result[i + j] = source[j];
        j++;
    }

    result[i + j] = '\0';

    return result;
}
