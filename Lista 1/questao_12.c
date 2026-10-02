/*Questão 12. A declaração de variáveis define o tipo e o identificador de cada espaço reservado na
memória. Analise cada uma das declarações na tabela a seguir, preencha o seu status (Correto ou
Incorreto) e, caso seja incorreto, justifique detalhadamente o erro sintático: */

/*/*
| Instrução           | Status (C/I) | Justificativa Teórica                                                                                    |
|---------------------|--------------|----------------------------------------------------------------------------------------------------------|
| a) int a;          | Correto      | Declaração válida de variável inteira.                                                                   |
| b) float b;        | Correto      | Declaração válida de ponto flutuante de precisão simples.                                                |
| c) double float c; | Incorreto    | Sintaxe inválida. Não se pode combinar 'double' e 'float', pois ambos são tipos base distintos.          |
| d) unsigned char d;| Correto      | Declaração válida de caractere sem sinal (0 a 255).                                                      |
| e) unsigned e;     | Correto      | Declaração válida. O modificador 'unsigned' isolado é subentendido como 'unsigned int'.                 |
| f) long float f;   | Incorreto    | Sintaxe inválida no C padrão. Para maior precisão utiliza-se 'double' ou 'long double', e não 'long float'.|
| g) long g;         | Correto      | Declaração válida. O modificador 'long' isolado é subentendido como 'long int'.                         |
| h) long double h;  | Correto      | Declaração válida de ponto flutuante de precisão estendida.                                              |
*/