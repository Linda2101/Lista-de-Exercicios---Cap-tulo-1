#include <stdio.h>
int main() {
    for(int i=0; i<=100; i++) printf("%d ", i);
    int w=0; while(w<=100) printf("%d ", w++);
    int d=0; do { printf("%d ", d++); } while(d<=100);
    return 0;
}
/* O 'for' e o mais adequado por ter contagem e limite conhecidos previamente. */