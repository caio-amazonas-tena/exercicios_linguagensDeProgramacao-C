/*
1 - Faça um programa, em linguagem C, que leia dois números reais
num1 e num2, e um número inteiro “op”.
2 - O valor da variável “op” determina a operação matemática que
deve ser feita com os números inteiros (1- soma, 2- subtração,
3 - multiplicação e 4-divisão).
4 - O programa deve exibir a operação realizada e o resultado
(exemplo: 1 + 1 = 2).
5 - Caso seja digitado um valor para “op” diferente (menor que 1 ou
maior que 4) o programa deve exibir a mensagem “Operação
inválida”.

OBS: Utilize a estrutura if-else.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;
    int op;

    printf("Digite os dois números e a operação desejada (1 = soma, 2 = subtração, 3 = multiplicação, 4 = divisão):\n");
    
    scanf("%f %f %d", &num1, &num2, &op);

    if (op == 1) 
        printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
    else if (op == 2) 
        printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
    else if (op == 3) 
        printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
    else if (op == 4) 
        printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
    else 
        printf("Operação inválida");

    return 0;
}