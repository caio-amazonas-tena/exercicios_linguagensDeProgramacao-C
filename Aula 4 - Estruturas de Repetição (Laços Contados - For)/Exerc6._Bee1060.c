/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos 
(desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.
Entrada: Seis valores, negativos e/ou positivos.
Saída:  Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/

#include <stdio.h>
#include <math.h>

int main () {
    int i, valor, positivos=0;

    for (i = 1; i <= 6; i++) {
        scanf("%d", &valor);

        if (valor > 0) { 
            positivos += 1;
        }       
    }

    printf("%d valores positivos", positivos);

    return 0;
}