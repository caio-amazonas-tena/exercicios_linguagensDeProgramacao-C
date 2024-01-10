/*Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) 
e o total de combustível gasto (em litros). 
Entrada: O arquivo de entrada contém dois valores: um valor inteiro X representando a 
distância total percorrida (em Km), e um valor real Y representando o total de 
combustível gasto, com um dígito após o ponto decimal.*/

#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    int X;
    float Y;

    printf("Digite a distância percorrida: ");
    scanf("%d", &X);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &Y);

    printf("%.3f km/l\n", X/Y);

    return 0;
}