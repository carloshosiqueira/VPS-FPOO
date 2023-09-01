#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale (LC_ALL,"");
	
	float preco[5], precoajustado, itens[5];
	int camisa, calsa, blusa, shorts, saia, porcentagem, totalitens, i;
	
	printf("1.Camisas 2.Calças 3.Blusas 4.Shorts 5.Saia\n\n");
	for(i = 0; i < 5; i++){
		
	printf("Quantos do item %d Jorge comprou? " ,i + 1);
	scanf("%f",&itens[i]);
	printf("Quanto custa cada um desse item? ");
	scanf("%f",&preco[i]);
}
	printf("Quantos porcento de lucro Jorge quer nesses itens? ");
	scanf("%d",&porcentagem);
	
	for(i = 0; i < 5; i++){
		precoajustado = preco[i] + (preco[i] * porcentagem / 100);
		totalitens += itens[i];
		
		
		printf("Jorge deve vender %d por %.2f reais para obter %d%% de lucro\n", i + 1, precoajustado, porcentagem);
	}
		printf("Jorge comprou um total de %d itens",totalitens);



	return 0;
	
	
}
