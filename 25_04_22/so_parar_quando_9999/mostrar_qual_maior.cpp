#include <stdio.h>

int main(){
	/*variavel de entrada*/
	int numero;
	/*variavel de saida*/
	int maior_numero;
	/*processamento*/
	/*só parar quando numero for 9999*/
	printf("digite um numero ");
	scanf("%d", &numero);
	if(numero!=9999){
		maior=numero;
	}else{
		maior=0;
	}	
	while(numero!=9999){
		
		if(numero>=maior_numero)
			maior_numero=numero;
		
		printf("digite um numero ");
		scanf("%d", &numero);
	}
	/*mostrar o maior numero*/
	printf("o maior numero %d", maior_numero);
}
