/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas 
de saída que serão apresentadas na execução do programa.
Entrada: O arquivo de entrada contém um número inteiro positivo N.
Saída: Imprima a saída conforme o exemplo fornecido.
*/

#include <stdio.h>
#include <math.h>

int main () {
    int i, cont;

    scanf("%d", &cont);

    for (i = 1; i <= cont; i++) {
        printf("%d %d %d\n", i, pow(i, 2), pow(i, 3));
    }
    return 0;
}