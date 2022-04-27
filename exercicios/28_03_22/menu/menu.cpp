#include <stdio.h>

int main(){
	//declarar entrada
	int cod_nadador;
	//mostrar menu
	printf(
		"Código---Categoria\n"
		"1001-----Infantil\n"
		"1002-----Juvenil\n"
		"1003-----Adolescente\n"
		"1004-----Senior\n"	
		"1005-----Profissional\n"
		"1006-----Master\n"	
	);
	//receber codigo 
	printf("digite o codigo: ");
	scanf("%d", &cod_nadador);
	//verificar codigo e mostrar categoria
	switch(cod_nadador){
		case 1001:
			printf("Infantil");
			break;
		case 1002:
			printf("Juvenil");
			break;
		case 1003:
			printf("Adolescente");
			break;
		case 1004:
			printf("Senior");
			break;
		case 1005:
			printf("Profissional");
			break;
		case 1006:
			printf("Master");
			break;
		default:
			printf("categoria inexistente");
	}
}
