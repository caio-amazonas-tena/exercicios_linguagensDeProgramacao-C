/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" 
ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
Entrada: A entrada contém valores inteiros.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}