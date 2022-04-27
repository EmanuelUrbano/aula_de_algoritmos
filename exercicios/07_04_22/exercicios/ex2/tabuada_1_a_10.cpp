#include <stdio.h>

int main(){
	/*variaveis de saida*/
	int resultado;
	/*variavel contadoras*/
	int i_numero_principal;
	int i_especifico;
	/*fazer taduada de todos os numeros*/
	for(i_numero_principal=0;i_numero_principal<=10;i_numero_principal++){
		printf("tabuada de %d \n",i_numero_principal);
		/*fazer do numero especifico*/
		for(i_especifico=0; i_especifico<=10; i_especifico++){
			resultado=i_numero_principal*i_especifico;
			printf("\n %d X %d = %d \n",i_numero_principal, i_especifico, resultado);
			
		}
	}
	
}
