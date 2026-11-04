#include <stdio.h>
int main() {
    int NUM, c = 0; scanf("%d", &NUM);
    for (int i = 1; i <= NUM; i++)
        if (i % 3 == 0 && i % 5 == 0) { printf("%d ", i); c++; }
    if (!c) printf("Nenhum numero encontrado.");
    return 0;
}