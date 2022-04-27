#include <stdio.h>

int main(){
	/*variavel de entrada*/
	int numero_principal;
	/*variavel de saida acumuladora*/
	int quantos_estao_no_intervalo;
	/*variavel contadora*/
	int i;
	/*verificar par ou impar*/
	for(i=1;i<=5;i++){
		/*requisitar numero*/
		printf("Digite um numero: ");
		scanf("%d", &numero_principal);
		if(numero_principal>=10 && numero_principal<=150)
			quantos_estao_no_intervalo++;
		
	}
	/*imprimir resultado*/
	printf("estão no intervalo: %d \n", quantos_estao_no_intervalo);
}

