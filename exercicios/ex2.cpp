#include <stdio.h>

int main(){
	//declarar variaveis
	float nota1,nota2, frequencia, media;
	//receber valores
	printf("digite a nota1: ");
	scanf("%f",&nota1);
	printf("Digite a nota2: ");
	scanf("%f", &nota2);
	printf("digite a frequencia(em %%): ");
	scanf("%f", &frequencia);
	//calcular
	media = (nota1+nota2)/2;
	//analisar o caso e mostrar situação
	if(media>=7.0 && frequencia>=75)
		printf("aprovado");
	else
		printf("reprovado");
	
	return(0);
}
