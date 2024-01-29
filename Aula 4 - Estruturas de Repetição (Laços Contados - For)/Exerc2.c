/*
Dentro dos ODS, a Agencia Nacional das Águas (ANA) trabalho o indicador 
6.2.1: proporção da população que utiliza serviços de esgotamento sanitário 
de forma segura, incluindo instalações para lavar as mãos com água e sabão.
Utilizando a linguagem C, desenvolva um programa que possibilite a entrada 
desse indicador para cada estado, incluindo o distrito federal, e calcule o 
indicador médio para o Brasil.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, cont=27;
    char estado[3];
    float ind, media=0;
    FILE *arqEnt;

    arqEnt = fopen("Indices.txt", "r");
    
    if (arqEnt == NULL) {
        printf ("Erro ao abrir o arquivo Indice.txt\n");
        exit(1);
    }

    for(i = 1; i <= cont; i++) {
        fflush(stdin);
        
        fscanf(arqEnt, "%s", estado);
        fscanf(arqEnt, "%f", &ind);
        
        media += ind;
    }

    printf("Proporção da população que utiliza serviços de esgotamento sanitário de forma segura: %.1f", media / cont);

    fclose(arqEnt);

    return 0;
}