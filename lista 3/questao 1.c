Questão 1
a) Mínimo de Execuções e Momento de Avaliação
while: Laço com pré-teste (teste no início). A condição é avaliada antes da execução do bloco de código. Caso a condição seja falsa na primeira verificação, o bloco é saltado e o número mínimo de execuções é 0 (zero).

do-while: Laço com pós-teste (teste no final). O bloco de código é executado uma primeira vez de forma incondicional e a condição só é avaliada ao término da iteração. O número mínimo de execuções é 1 (uma).

b) Situações de Escolha Ideais
for: Ideal para iterações contadas ou quando o número exato de repetições é conhecido previamente (ex.: percorrer arrays, matrizes ou intervalos numéricos definidos).

while: Ideal para repetições baseadas em condições genéricas cujo número de iterações é desconhecido e o bloco não deve ser executado caso a condição inicial seja falsa (ex.: processamento de arquivos até encontrar EOF ou leitura de fila enquanto não estiver vazia).

do-while: Ideal para cenários onde a ação inicial é obrigatoria antes da validação, como na exibição de menus interativos e na validação de entrada de dados (garante a leitura antes de testar se a entrada é válida).

c) Análise de Código: while (condicao);
Classificação: Trata-se de um erro de lógica (sintaticamente é válido, pois o ponto e vírgula representa uma instrução vazia ; como corpo do laço).

Comportamento se condicao for verdadeira: O programa entra em um laço infinito com corpo vazio. A CPU fica presa avaliando a condição continuamente em busy-waiting (espera ocupada), sem executar nenhuma outra instrução abaixo do laço, travando o fluxo normal do programa.