#include <stdio.h>

int main(){
	/*variavel contadora*/
	int contador;
	/*mensagem falando o que vai acontecer*/
	printf("numeros pares entre 1 e 100\nPronto?\niniciar");
	/*fazer codigo até que contador seje 100*/
	for(contador=0;contador<=100;contador++){
		/*verificar se contador é par, dividindo
		 contador por dois e se não sobra resto*/
		 if(contador%2==0){
		 	printf("\n %d",contador);
		 }
	}
}
