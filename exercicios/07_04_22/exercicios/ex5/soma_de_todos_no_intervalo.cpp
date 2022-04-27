#include <stdio.h>

int main(){
	/*variavel de entrada*/
	int m, n;
	/*variavel de saida*/
	int resultado;
	/*variavel contadora*/
	int i;
	/*requisitar numeros*/
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite um numero maior: ");
	scanf("%d", &n);
	/*imprimir tabuada*/
	for(i=m;i<=n;i++){
		resultado+=i;
		
	}
	printf("%d", resultado);
}

