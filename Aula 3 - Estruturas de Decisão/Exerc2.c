/*
Faça outro programa, em linguagem C, considerando o enunciado
do exercício anterior, só que agora, utilize a estrutura switch-case.
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

    switch (op){
    case 1:
        printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%.1f / %1.f = %.1f", num1, num2, num1 / num2);
    }

    return 0;
}