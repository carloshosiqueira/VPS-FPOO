#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"");
	
	float nota1, nota2;
	
	printf("Digite as duas notas da disciplina, de 0 a 10 e separadas por espaço: ");
	scanf("%f %f", &nota1, &nota2);
	
	while(nota1 > 10){
		printf("Sua nota1 é maior que o limite, escreva um número de 0 a 10!\n");
		printf("Nota 1: ");
		scanf("%f", &nota1);
	}
	while(nota1 < 0){
		printf("Sua nota1 é menor que o limite, escreva um número de 0 a 10!\n");
		printf("Nota 1: ");
		scanf("%f", &nota1);
	}
	while(nota2 > 10){
		printf("Sua nota2 é maior que o limite, escreva um número de 0 a 10!\n");
		printf("Nota 2: ");
		scanf("%f", &nota2);
	}
	while(nota2 < 0){
		printf("Sua nota2 é menor que o limite, escreva um número de 0 a 10!\n");
		printf("Nota 2: ");
		scanf("%f", &nota2);
	}

	float media = (nota1 + nota2) / 2;
	
	if(media >= 6){
		printf("Você está aprovado com uma média de %.1f",media);
	}
	else{
		printf("Você está reprovado com uma média de %.1f",media);
	}



	return 0;
	
	
}
