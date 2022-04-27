#include <stdio.h>

int main(){
	/*variavel de entrada*/
	float altura;
	char sexo;
	int qtde_alunos, qtde_alunos_m;
	qtde_alunos= 5;
	qtde_alunos_m =0;

	/*variavel de saida*/
	float menor_altura, media_altura_meninos, maior_altura;
	char sexo_da_maior_altura;
	media_altura_meninos=0;
    menor_altura=2000000000;
	maior_altura=0;
	/*variavel contadora*/
	int i;
	/*receber valores e calcular media de altura, o mais alto e o sexo*/
   
	for(i=1;i<=qtde_alunos;i++){
	   
		/*requisitar altura e sexo*/
		printf("Digite a altura do aluno: ");
		scanf("%f", &altura);
		
		printf("Digite o sexo do aluno(M/F): ");
		scanf(" %c", &sexo);
		
		if(altura<=menor_altura&&altura>=1){
	          menor_altura=altura;
	          printf("a");
       }
	     if(altura>=maior_altura){
            maior_altura=altura;
            sexo_da_maior_altura=sexo;
	    }
		if(sexo=='m'||sexo=='M'){
		    media_altura_meninos+=altura;
		    qtde_alunos_m++;
		}
	   
	   
	
		
	}
    media_altura_meninos=media_altura_meninos/qtde_alunos_m;
	printf("\n a menor altura é %f", menor_altura);
	printf("\n a media da altura dos meninos é %f", media_altura_meninos);
	printf("\n a maior altura é %f e ele é %c ", maior_altura, sexo_da_maior_altura );
}

