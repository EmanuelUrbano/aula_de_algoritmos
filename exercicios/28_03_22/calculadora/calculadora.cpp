#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//declarar entrada
	float num1, num2;
	char operador;
	//declarar saida
	float resultado;
	//receber valores
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o operador: ");
	scanf(" %c", &operador);
	printf("digite outro numero: ");
	scanf("%f", &num2);
	//calcular de acordo com o operador
	switch(operador){
		case '+':
			resultado=num1+num2;
			break;
		case '-':
			resultado=num1-num2;
			break;
		case '/':
			resultado=num1/num2;
			break;
		case '*':
			resultado=num1*num2;
			break;
		default:
			resultado = 0;
			
	}
	//mostrar
	printf("o resultado %.2f", resultado);
}
