#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//declarar variaveis de entrada e saida
	float nota;
	char conceito;
	//receber valores
	printf("digite a nota: ");
	scanf("%f", &nota);
	//verificar qual é o conceito
	if(nota==0){
		printf("E");
	}else{
		if(nota>0 && nota<=35){
			printf("D");
		}else{
			if(nota>35 && nota<=60){
				printf("C");
			}else{
				if(nota>60 && nota<=85){
					printf("B");
				}else{
					if(nota>85 && nota<= 100){
						printf("A");
					}else{
						printf("ok : I");
					}
				}
			}
		}
	}
}
