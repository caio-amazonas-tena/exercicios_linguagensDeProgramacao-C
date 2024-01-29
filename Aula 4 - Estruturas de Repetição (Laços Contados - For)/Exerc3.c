/*
A regra do impedimento no futebol, em muitos momentos, é difícil de ser aplicada pelo bandeirinha. 
Ela funciona dada as posições de três jogadores: “L” o jogador  atacante que lança a bola; “R” o 
jogador atacante que recebe a bola; e “D” o último jogador defensor.
E a regra vale somente se o jogador R está no seu campo de ataque; se o jogador R está no seu campo 
de defesa ou na linha divisória do meio campo, ele não está em impedimento. Neste problema o campo 
tem 100 metros de comprimento.
Dadas as posições desses três jogadores, no momento exato do lançamento, haverá
impedimento se e somente se a seguinte condição for verdadeira: (R > 50) e (L < R) e (R > D)
Tarefa: 
Sua tarefa é produzir um programa que processe vários lances de impedimento. O programa deve apenas 
determinar, dadas as três posições L, R e D, se há ou não impedimento, implementando exatamente a 
condição acima. A figura abaixo mostra um exemplo onde não há impedimento.
Entrada:
A entrada de dados é composta por várias linhas. Na primeira linha tem um número inteiro (N) que
representa a quantidade de lances a serem processados. As N linhas seguintes contém três inteiros,
respectivamente as posições dos jogadores L; R e D, sendo 0 <= L, R, D <= 100.
Saída:
O programa deve produzir uma linha para cada lance processado, contendo um único caractere, que deve 
ser “S” caso haja impedimento, ou “N” caso contrário.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int N, L, R, D, i;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d %d %d", &L, &R, &D);

        if (R <= 50) {
            printf("N\n");
        } else if (R > D) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}