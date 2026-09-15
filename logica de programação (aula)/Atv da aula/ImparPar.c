#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero para saber se ele eh par ou impar: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("o numero %d eh PAR", num);
	}
	
	else{
		printf("o numero %d eh IMPAR", num);
	}
	return 0;
}
