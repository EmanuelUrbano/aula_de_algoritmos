#include <stdio.h>

int main(){
	/*declarar variavel de entrada*/
	int parar_de_contar;
	/*declarar variavel acumuladora que � tambem a de saida  e a variavel contadora que conta de um em um*/
	/*a variavel acumuladora � a que acumula valores a cada ciclo*/
	int contador;
	int acumuladora=0;
	/*iniciei para n�o pegar valores da memoria de forma aleatoria*/
	/*receber valores*/
	printf("Digite o numero que deve parar de contar: ");
	scanf("%d", &parar_de_contar);
	/*iniciar estrutura de repeti��o com contador igual a 1, que � o numero que vai come�ar*/
	/*se o contador for menor ou igual a variavel de entrada */
	/* incrementar e repetir */
	
	for(contador=1;contador<=parar_de_contar;contador++){
		acumuladora=acumuladora+contador;
		printf("\n %d",acumuladora);
	}
	
}
