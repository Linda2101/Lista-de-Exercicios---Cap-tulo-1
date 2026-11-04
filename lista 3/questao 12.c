#include <stdio.h>
int main() {
    printf("C\tF\tK\n");
    for (int C = 0; C <= 100; C += 5)
        printf("%d\t%.2f\t%.2f\n", C, (9.0*C)/5 + 32, C + 273.15);
    return 0;
}