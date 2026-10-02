/*Questão 22. Desenhe no console um carro e uma caminhonete utilizando caracteres de bloco e de
controle estudados no capítulo. Utilize sequências de escape em hexadecimal (como \xDC e \xDF) para
renderizar a seguinte arte gráfica:*/

#include <stdio.h>

int main() {
    // Carro
    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf("\xDF O\xDF\xDF\xDF\xDF\xDF O\xDF\n");

    // Caminhonete
    printf("\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDF O\xDF\xDF\xDF\xDF\xDF OO\xDF\n");

    return 0;
}