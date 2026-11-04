#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    char sec = rand() % 26 + 'a', ch; int t = 0;
    do {
        scanf(" %c", &ch); t++;
        if (ch < sec) printf("DEPOIS\n");
        else if (ch > sec) printf("ANTES\n");
    } while (ch != sec);
    printf("Parabens! Acertou em %d tentativa(s)!\n", t);
    return 0;
}