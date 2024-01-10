/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número 
e o salário do funcionário, com duas casas decimais.
Entrada: O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, 
representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por 
hora trabalhada, respectivamente.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numFuncionario, numHoras;
    float valorHora;

    scanf("%d", &numFuncionario);
    scanf("%d", &numHoras);
    scanf("%f", &valorHora);

    printf("NUMBER = %d\n", numFuncionario);
    printf("SALARY = U$ %.2f\n", numHoras * valorHora);

    return 0;
}