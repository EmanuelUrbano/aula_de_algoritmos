#include <stdio.h>

int main(){
	char resp='n';
	while(resp=='n'){
		printf("parar agora? ");
		scanf(" %c", &resp);
	}
	printf("encerrou");
}
