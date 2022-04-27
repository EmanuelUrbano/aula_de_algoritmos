#include <stdio.h>

int main(){
	/*declarar contador*/
	int contador;
	/*iniciar estrutura de repetição e variavel com valor 2*/
	/* 
	contador vai ser igual a 2
	se o contador for menor ou igual a 90
		add mais 1 ao contador
		fazer o codigo dentro do for
	senao 
		não incrementar
		sair do laço de repetição
	*/
	for(contador=2; contador<=90; contador++){
		/*se o contador for par mostrar na tela*/
		if(contador%2==0){
			printf("\n %d",contador);
		}
	}
}
