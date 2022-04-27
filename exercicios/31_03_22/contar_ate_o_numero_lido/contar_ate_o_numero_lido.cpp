#include <stdio.h>

int main(){
	/*declarar variavel de entrada*/
	int parar_de_contar;
	/*declarar variavel acumuladora que é tambem a de saida  e a variavel contadora que conta de um em um*/
	/*a variavel acumuladora é a que acumula valores a cada ciclo*/
	int contador;
	int acumuladora=0;
	/*iniciei para não pegar valores da memoria de forma aleatoria*/
	/*receber valores*/
	printf("Digite o numero que deve parar de contar: ");
	scanf("%d", &parar_de_contar);
	/*iniciar estrutura de repetição com contador igual a 1, que é o numero que vai começar*/
	/*se o contador for menor ou igual a variavel de entrada */
	/* incrementar e repetir */
	
	for(contador=1;contador<=parar_de_contar;contador++){
		acumuladora=acumuladora+contador;
		printf("\n %d",acumuladora);
	}
	
}
