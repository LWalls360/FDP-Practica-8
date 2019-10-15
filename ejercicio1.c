#include <stdio.h>

int main(){
	int num1, num2;
	printf("Ingresa 2 números \n");
	scanf("%d\n", &num1);
	scanf("%d", &num2);
	
	if ( num1 < num2)
		printf("El número %d es menor que %d\n ",num1,num2);
	return 0; 	
}
