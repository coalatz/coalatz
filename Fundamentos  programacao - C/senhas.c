/*Motivação
Todo algoritmo de força bruta exige a geração de todas as combinações possíveis para a senha. Quanto mais informação se tem sobre a senha, menor o espaço de busca a ser testado.

Seu amigo disse: Minha senha tem 2 dígitos e os únicos algarismos que podem aparecer nela são "0,1,3". Calculando todas as permutações com repetição geraria as seguintes possibilidades:

00, 01, 03, 10, 11, 13, 30, 31, 33*/


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//return next char after ref
char inc_char(const char * list, char ref){
    size_t size = strlen(list);
    for(size_t i = 0; i < size; i++){
        if(list[i] == ref){
            return list[(i + 1) % size];
        }
    }
    return 0;
}

int main(){
    int pass_size = 0;
    int qtd_senhas = 0;
    scanf("%d %d", &pass_size, &qtd_senhas);
    char list[100];
    char pass[pass_size + 1];
    scanf("%s %s", list, pass);

    while(qtd_senhas--){
        for(int i = pass_size - 1; i >= 0; i--){
            pass[i] = inc_char(list, pass[i]);
            if(pass[i] != list[0]) //nao teve loop
                break;
        }
        printf("%s\n", pass);
    }
}

