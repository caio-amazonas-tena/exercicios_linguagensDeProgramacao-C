/*Elabore um programa que permita entrar com dados de dois anos 
quaisquer e mostre a diferença de recursos aplicados no ano
mais recente em relação ao ano mais antigo.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoIni,anoFim;
    float fluxoIni, fluxoFim, diferenca;

    printf("Digite ano e recurso inicial\n");
    printf("Ano inicial: ");
    scanf("%d", &anoIni);
    printf("Valor do ano inicial: ");
    scanf("%f", &fluxoIni);

    printf("Digite ano e recurso final\n");
    printf("Ano final: ");
    scanf("%d", &anoFim);
    printf("Valor do ano final: ");
    scanf("%f", &fluxoFim);

    diferenca = fluxoFim - fluxoIni;

    printf("Diferença de recursos do ano final e inicial: %.2f\n", diferenca);

    return 0;
}