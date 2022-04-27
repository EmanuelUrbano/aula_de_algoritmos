#include <stdio.h>

int main(){
	/*variavel de entrada*/
	float numero_principal;
	/*variavel de saida*/
	float resultado;
	/*variavel contadora*/
	int i;
	/*requisitar numero*/
	printf("Digite um numero: ");
	scanf("%f", &numero_principal);
	/*imprimir tabuada*/
	for(i=0;i<=10;i++){
		resultado=numero_principal*i;
		printf("%.2f X %d = %.2f\n", numero_principal, i,resultado);
	}
}
