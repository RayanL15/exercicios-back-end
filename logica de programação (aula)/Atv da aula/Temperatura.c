#include <stdio.h>
int main (){
	int temp;
	printf("Digite a temperatura em Celsius: ");
	scanf("%d", &temp);
	
	if (temp >= 35){
		printf("Esta MUITO QUENTE!");
	}
	
	else if (temp >= 25){
		printf("Esta QUENTE!");
	}s
	
	else if (temp >= 18){
		printf("Esta AGRADAVEL!");
	}
	
	else{
		printf("Esta FRIO");
	}
	return 0;
}
