#include <stdio.h>

int main(){
	/*variaveis de entrada*/
	float maria=1.50, joao=1.30;
	/*variavel contadora*/
	int anos=0;
	
	while (joao<maria){
		joao+=0.03;
		maria+=0.02;
		anos++;
	}
	printf(" demora %d anos para joao ser maior que maria", anos);
}
