/*Motivação
Um atirador de elite estava atirando a 400 metros de distância em em um papel milimetrado. Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles. Como ele não tinha régua, ele pegou os pontos no plano cartesiano e a fórmula da distância entre os pontos.

Ação
Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto, imprima a distância entre os pontos com duas casas decimais.*/

#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1;   //coordenadas de P1
	float x2, y2;   //coordenadas de P2
	float distancia;
	
	scanf("%f %f ", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt( pow((x1 - x2),2) + pow((y1 - y2),2) );
	
	if (distancia < 0) 
        distancia = distancia * (-1);
	
	printf("%.2f\n", distancia);
	
	return 0;
}
