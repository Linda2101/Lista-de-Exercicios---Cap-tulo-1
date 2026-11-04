#include <stdio.h>
int main() {
    for (int i = 32; i <= 126; i++)
        printf("DEC: %3d | HEX: %02X | CHAR: %c\n", i, i, i);
    return 0;
}