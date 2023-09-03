/*Motivação
Chico deseja coletar todas as frutas do quintal vizinho. Porém, sem que seu vizinho o veja. Para isso, Chico precisa saber exatamente quanto tempo ele irá gastar na coleta. Sabendo que você é um programador, Chico pediu sua ajuda nessa missão furtiva.

Há três tipos de frutas no quintal: bananas, goiabas e mangas. Chico tem uma cesta que pode carregar até C frutas. Ele gasta exatamente 1 minuto para ir ao quintal vizinho, encher a cesta e voltar.

Ação
Dada a capacidade C da cesta, a quantidade de frutas, calcule quantos minutos Chico precisará para coleta. Você pode considerar que há pelo menos uma fruta a ser coletada.
*/



#include <stdio.h>
#include <math.h>
//a solução eh o teto de (b+g+m)/c

int main(){
    int c = 0, b = 0, g = 0, m = 0;    
    scanf("%d %d %d %d", &c, &b, &g, &m);
    float result = (b + g + m) / (float) c; // calcula o piso
    printf("%d\n", (int) ceil(result));
}

