#include <stdio.h>
int main() {
    int num, inv = 0; scanf("%d", &num);
    while (num > 0) {
        inv = (inv * 10) + (num % 10);
        num /= 10;
    }
    printf("Invertido = %d\n", inv);
    return 0;
}