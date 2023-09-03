/*No zerim ou um americano cada participante coloca quantos dedos quiser na roda. Um dos participantes soma os dedos e aponta para cada participante enquanto conta. Ganha aquele cujo dedo apontar no último número.

Suponha que existem 4 jogadores. O contador, o jogador 1, aponta pra cima e diz "zero", e então aponta pra si mesmo e diz "um", aponta pro jogador 2 e diz "dois", pro jogador 3 e diz "três", pro jogador 4 e diz "quatro", volta a apontar pra si e diz "cinco" e assim até que os números acabem.

*/

#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int soma = a + b + c + d;
    
    if(soma == 0)
        puts("nenhum");
    else
        printf("jog%d\n", (((soma - 1) % 4) + 1));
    return 0;
}
