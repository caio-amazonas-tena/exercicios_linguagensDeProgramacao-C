/*Escreva e compile o código C abaixo, observando:
> O código apresenta algum tipo de erro na compilação?
> Quais os tipos de erros (Sintaxe e/ou Lógica) encontrados?
> O que deve ser feito para o código executar normalmente?*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    float x, total;

    num = 2;
    x = 135.4;

    total = num * x;

    printf("Multiplicação = %.2f\n", total);

    return 0;
}