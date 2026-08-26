/*Questão 27. Escreva um programa em C que solicite ao usuário (usando a função scanf()) um valor
inteiro correspondente a um intervalo de tempo em segundos. O programa deve processar esse dado,
calcular e exibir o equivalente formatado em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos).*/

#include <stdio.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    // Leitura do valor digitado pelo usuário
    printf("Digite o tempo em segundos: ");
    scanf("%d", &total_segundos);

    // Cálculos de conversão
    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    // Exibição do resultado
    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           total_segundos, horas, minutos, segundos);

    return 0;
}