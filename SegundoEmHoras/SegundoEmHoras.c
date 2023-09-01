#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"");
	
	int tempo, segundos = 0, minutos = 0, horas = 0;
	int i;
	
	printf("Escreva quanto tempo demorou o processo em segundos: ");
	scanf("%d",&tempo);
	
	while(tempo >=3600){
		horas++;
		tempo -= 3600;
	}
	while(tempo >=60){
		minutos++;
		tempo -= 60;
	}
	segundos = tempo;
	
	printf("Tempo em horas = %dh %dmin %dseg", horas, minutos, segundos);
		
	
	return 0;


}
