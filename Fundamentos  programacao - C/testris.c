/*Motivação
Você com certeza já jogou tetris. Ele é o jogo mais vendido do mundo com 170 milhões de unidades. Seja no seu celular ou no mini game de 70 joguinhos em um da vovó, Tetris é imbatível.

Ação
Você fai simular a queda de um única peça de Tetris. Verifique se a peça não está colidindo com nada e faça-a descer uma posição.*/


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 22 //20 + \n + \0

bool tem_bloqueio(int nl, int nc, char mat[nl][nc + 2]){
    for(int l = 0; l < nl; ++l){
        for(int c = 0; c < nc; c++){
            if(mat[l][c] == 'o'){
                if(l + 1 == nl)
                    return true;
                if((l + 1 < nl) && (mat[l + 1][c] == '#'))
                    return true;
            }
        }
    }
    return false;
}

int main(){
    int nl, nc;
    scanf("%d %d%*c", &nl, &nc); //descarta um char no final, o \n
    char mat[nl][nc + 2]; //para caber o \n e o \0
    for(int i = 0; i < nl; i++)
        fgets(mat[i], MAX, stdin);

    if(!tem_bloqueio(nl, nc, mat)){
        for(int l = nl - 1; l > 0; --l)
            for(int c = 0; c < nc; c++){
                if(mat[l - 1][c] == 'o'){
                    mat[l][c] = 'o';
                    mat[l - 1][c] = '.'; //puxando a bolinha
                }
            }
    }
    for(int i = 0; i < nl; i++)//mostrando o resultado
        printf("%s", mat[i]);
    return 0;
}
