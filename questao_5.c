/*Questão 05. Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o
programa está correto para compilação e execução imediata? Caso negativo, descreva quais elementos
cruciais e diretivas estão faltando no código abaixo:*/

#include <stdio.h> // Biblioteca para o printf()
#include <stdlib.h> // Biblioteca para o system()

 int main() // Declarando o tipo 'int' de retorno
{
    printf("Linguagem C ");
    system("pause");
    return 0; // Retorno de sucesso exigido pelo ANSI C
}