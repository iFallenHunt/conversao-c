#include <stdio.h>

float conversao(float qtde, float cot){
	float conv;
	conv = qtde * cot;
	return (conv);
}
int main(){
	float R, E, C;
	printf("Digite o valor em Euros: ");
	scanf("%f", &E);
	printf("\nInsira o valor da cotacao: ");
	scanf("%f", &C);
	
	R = conversao(E,C);
	
	printf("O valor em reais e: %.3f", R);
}