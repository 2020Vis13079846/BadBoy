#include <stdio.h>
#include <ctype.h>

int main() {
    char* start = "There are no";
    char* d = start;
    char* s = d;

    while (s) {
        char c = *s++;
        if (ispunct(c) || isspace(c)) {
            continue;
        }
        *d++ = c;
    }
    printf("%s\n", start);
}
