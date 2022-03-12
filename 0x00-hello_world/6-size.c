#include <stdio.h>

/**
 * main - Entry point
 *
 * the varous types in c
 */
int main() {
    char charType;
    int intType;
    long longType;
    long longintType;
    float floatType;

    printf("Size of chat: %zu bytes\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long: %zu bytes\n", sizeof(longType));
    printf("Size of long int: %zu byte\n", sizeof(longintType));
    printf("Size of float: %zu byte\n", sizeof(long floatType));
    return 0;
}