#include <stdio.h>

int main(){
	/*variaveis de entrada*/
	float nota1, nota2;
	float media;
	/*variavel contadora*/
	int quantidade_de_alunos;
	/*variavel acumuladora/de saida */
	float media_da_sala;
	int quantidade_de_alunos_aprovados;

	/*receber nota1 e nota2 de 5 alunos*/
	for(quantidade_de_alunos = 1;quantidade_de_alunos<=5;quantidade_de_alunos++){
		printf("Digite a primeira nota: ");
		scanf("%f",&nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		/*calcular media do aluno e mostrar*/
		media=(nota1+nota2)/2;
		printf(" * o aluno %d tirou %f \n", quantidade_de_alunos, media);
		
		/*verificar se a nota é maior que 6*/
		if(media>=6)
			/*se for somar 1 a quantidade de alunos aprovados*/
			quantidade_de_alunos_aprovados++;
			
		/*somar a media deste aluno a media da sala, nessa variavel
		estará acumulando a media de todos os alunos*/
		media_da_sala+=media;
	}
	/*mostrar quantos alunos foram aprovados*/
	printf("\n->tem %d alunos aprovados \n", quantidade_de_alunos_aprovados);
	/*dividir a soma de todas as medias pela quantidade de alunos*/
	media_da_sala=media_da_sala/5;
	/*mostrar a media da sala*/
	printf("\n->a media sala é %f", media_da_sala);
}
