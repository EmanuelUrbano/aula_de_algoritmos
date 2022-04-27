#include <stdio.h>

int main(){
	/*variavel de entrada*/
	int numero_principal;
	/*variavel de saida*/
	int numeros_pares;
	int numeros_impares;
	/*variavel contadora*/
	int i;
	
	/*verificar par ou impar*/
	for(i=1;i<=15;i++){
		/*requisitar numero*/
		printf("Digite um numero: ");
		scanf("%d", &numero_principal);
		if(numero_principal%2==0){
			numeros_pares++;
		}else{
			numeros_impares++;
		}
	}
	/*imprimir resultado*/
	printf("pares: %d \nimpares: %d", numeros_pares, numeros_impares);
}

