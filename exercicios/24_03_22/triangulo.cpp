#include <stdio.h>

int main(){
	//declara variaveis
	float lado1,lado2,lado3, soma_dos_lados;
	
	bool sera_q_triangulo;
	
	
	//receber o valor dos lados
	printf("digite o lado 1: ");
	scanf("%f", &lado1);
	printf("digite o lado 2: ");
	scanf("%f", &lado2);
	printf("digite lado 3: ");
	scanf("%f", &lado3);
	
	
	//verificar se é triangulo
	soma_dos_lados=lado1+lado2;
	
	if(soma_dos_lados>lado3){
		sera_q_triangulo = true;
	}else{
		sera_q_triangulo=false;
	}
	//qual triangulo
	if(sera_q_triangulo){
		if(lado1==lado2 && lado2 ==lado3){
			printf("equilatero");
		}else{
			if(lado1==lado2||lado2==lado3){
				printf("isoceles");
			}else{
				if(lado1!=lado2 && lado2!=lado3){
					printf("escaleno");
				}else{
					printf("nao sei");
				}
			}
		}
	}else{
		printf("como vc chegou aqui?");
	}
}
