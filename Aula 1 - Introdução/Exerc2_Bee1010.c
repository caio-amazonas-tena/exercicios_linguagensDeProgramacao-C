/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, 
o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 
e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cod1, cod2, num1, num2;
    float valor1, valor2, total;

    scanf("%d %d %f", &cod1, &num1, &valor1);
    scanf("%d %d %f", &cod2, &num2, &valor2);

    total = (num1 * valor1) + (num2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}