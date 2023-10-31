#include <stdio.h>
#include <string.h>

void get_next(char* pattern, int next[]) {

}

char* Index_KMP(char text[], char pattern[], int next[]) {
    char* textPtr = text;
    char* patternPtr = pattern;
    while (*textPtr != '\0' && *patternPtr != '\0') {
        if (*textPtr == *patternPtr || patternPtr == pattern) {
            ++textPtr;
            ++patternPtr;
        } else {
            textPtr += next[patternPtr - pattern];
        }
    }
    if (patternPtr == '\0') {
        return textPtr - (patternPtr - pattern);
    }
    return NULL;
}

int main() {

    return 0;
}