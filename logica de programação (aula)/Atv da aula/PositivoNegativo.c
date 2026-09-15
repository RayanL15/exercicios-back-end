#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero para saber se ele eh positivo ou negativo: ");
	scanf("%d", &num);
	
	if(num >= 0){
		printf("o numero %d eh POSITIVO", num);
	}
	
	else{
		printf("o numero %d eh NEGATIVO", num);
	}
	return 0;
}
