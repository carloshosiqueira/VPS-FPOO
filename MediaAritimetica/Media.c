#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"");
	
	float nota1, nota2;
	
	printf("Digite as duas notas da disciplina, de 0 a 10 e separadas por espa�o: ");
	scanf("%f %f", &nota1, &nota2);
	
	while(nota1 > 10){
		printf("Sua nota1 � maior que o limite, escreva um n�mero de 0 a 10!\n");
		printf("Nota 1: ");
		scanf("%f", &nota1);
	}
	while(nota1 < 0){
		printf("Sua nota1 � menor que o limite, escreva um n�mero de 0 a 10!\n");
		printf("Nota 1: ");
		scanf("%f", &nota1);
	}
	while(nota2 > 10){
		printf("Sua nota2 � maior que o limite, escreva um n�mero de 0 a 10!\n");
		printf("Nota 2: ");
		scanf("%f", &nota2);
	}
	while(nota2 < 0){
		printf("Sua nota2 � menor que o limite, escreva um n�mero de 0 a 10!\n");
		printf("Nota 2: ");
		scanf("%f", &nota2);
	}

	float media = (nota1 + nota2) / 2;
	
	if(media >= 6){
		printf("Voc� est� aprovado com uma m�dia de %.1f",media);
	}
	else{
		printf("Voc� est� reprovado com uma m�dia de %.1f",media);
	}



	return 0;
	
	
}
