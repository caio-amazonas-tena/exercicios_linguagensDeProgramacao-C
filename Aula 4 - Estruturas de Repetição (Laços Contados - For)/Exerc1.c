/*
Um conhecido professor, no seu tempo de juventude, conheceu o chinês Ding Ping Lee.
Passados muitos anos, o professor relembrou de uma brincadeira que o chinês criou, 
usando seu próprio nome. A brincadeira consiste em ir falando em voz alta, números 
de 1 a 100. Sempre que encontrar um múltiplo de 3, substituir o númeropela palavra Ding. 
Sempre que for um múltiplo de 5 usar a palavra 'Ping'. Ao término, usar o 'Lee'.
Exemplo: 1, 2, Ding, 4, Ping, Ding, 7, 8, ..., 97, 98, Ding, Ping, Lee.

Desenvolver um programa em Linguagem C, que mostre, na tela,uma saída de dados como a da 
brincadeira apresentada.
*/

#include <stdio.h>

int main () {
    int i;
    
    for (i=1; i<=100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("Ding Ping\n");   
        }   else if (i % 3 == 0) {
            printf("Ding\n");
        }   else if (i % 5 == 0) {
            printf("Ping\n");
        }   else {
            printf("%d\n", i);        
        }
    }   
    
    printf("Lee\n");

    return 0;
}