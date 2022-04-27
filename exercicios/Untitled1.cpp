#include <stdio.h>

int main(){
	char sexo;
	
	printf("digite o sexo [M/F]: ");
	scanf("%c", &sexo);
	
	if(sexo=='M' || sexo=='m')
		printf("sexo masculino");
	else
		printf("sexo feminino");

	return(0);
}
