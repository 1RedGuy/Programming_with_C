#include <stdio.h>
#include <string.h>
#include "transformation.h"

struct transformation trans_function(char target_string[]) {
    struct transformation a;
    int i = 0;
    a.result = 0;
    strcpy(a.error, "Invalid number");
    if (target_string[0] == '\0') {
        return a;
    }
    if (target_string[0] == '-') {
        i = 1;
    }
    while (target_string[i] != '\0') {
        if (target_string[i] < '0' || target_string[i] > '9') {
            return a;
        }
        a.result = a.result * 10 + (target_string[i] - '0');
        i++;
    }
    if (target_string[0] == '-') {
        a.result = -a.result;
    }
    strcpy(a.error, "\0");
    return a;
}
