#include <stdio.h>

int main(){
	/*variavel de entrada*/
	float preco_custo, preco_venda;
	/*variavel de saida*/
	float resultado;
	/*variavel contadora*/
	int i;
	/*imprimir tabuada*/
	for(i=1;i<=40;i++){
		/*requisitar numero*/
		printf("Digite o preco de custo: ");
		scanf("%d", &preco_custo);
		printf("Digite o preco de venda: ");
		scanf("%d", &preco_venda);
		resultado+= preco_venda - preco_custo;
		if(resultado>0){
			printf("lucro\n");
		}else{
			if(resultado<0){
				printf("prejuizo\n");
			}else{
				printf("empate\n");
			}
		}
	}
	
}

