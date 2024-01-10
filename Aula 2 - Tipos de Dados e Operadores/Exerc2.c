/*Escreva e compile o código C abaixo, observando:
> O código apresenta algum tipo de erro na compilação?
> Quais os tipos de erros (Sintaxe e/ou Lógica) encontrados?
> O que deve ser feito para o código executar normalmente?*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero, x;
    
    scanf("%d", &numero);

    scanf("%d", &x);

    printf("Soma = %d\n", numero + x);

    return 0;
}