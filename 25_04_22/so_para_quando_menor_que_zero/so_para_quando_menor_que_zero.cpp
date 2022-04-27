#include <stdio.h>

int main(){
	/*variavel de entrada*/
	int numero;
	/*variavel contadora*/
	int quantidade_de_positivos;
	/*processamento*/
	/*só encerrar quando numero for 0 ou negativo*/
	while(true){
		/*receber valor*/
		printf("digite um numero: ");
		scanf("%d", &numero);
		/*verifica se o numero é positivo*/
		if(numero>0){
			/*soma a contadora*/
			quantidade_de_positivos++;
		}else{
			break;
		}
	}
	/*mostrar na tela quantidade de positivos*/
	printf("foram lidos %d", quantidade_de_positivos);
	
	return 1;
}
