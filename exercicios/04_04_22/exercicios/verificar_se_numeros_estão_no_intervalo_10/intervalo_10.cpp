#include <stdio.h>

int main(){
	int contador;
	int numero_recebido;
	int numeros_no_intervalo =0;
	
	for(contador=1;contador<=10;contador++){
		printf("\nDigite um numero:");
		scanf("%d",&numero_recebido);
		
		if(numero_recebido>=10&&numero_recebido<=150)
			numeros_no_intervalo++;
	}
	printf("tem %d no intervalo", numeros_no_intervalo);
}
