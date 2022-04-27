#include <stdio.h>

int main(){
	/*variaveis de entrada*/
	float numero1, numero2;
	char operador, parar='s';
	/*variaveis de saida*/
	float resultado;
	while(parar!='n'){
		/*receber valores*/
		printf("digite o calculo(ex:3+3): ");
		scanf("%f %c%f", &numero1,&operador,&numero2);

		/*fazer calculo*/
		switch (operador){
			case '+':
				resultado=numero1+numero2;
				break;
			case '-':
				resultado=numero1-numero2;
				break;
			case '*':
				resultado=numero1*numero2;
				break;
			case '/':
				resultado=numero1/numero2;
				break;
			default:
				break;
		}
		/*mostrar na tela*/
		printf("\no resultado é %f", resultado);
		/*vai parar?*/
		printf("\ncontinuar calculando?: ");
		scanf(" %c", &parar);
	}
	printf("encerrou programa");
	
}
