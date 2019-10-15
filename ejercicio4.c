#include <stdio.h>

int main(){
	int num1, num2;
	printf("Ingresa 2 números \n");
	scanf("%d\n", &num1);
	scanf("%d", &num2);
	
	(num1 < num2) ?	
		printf("El primer número %d es menor que el segundo %d\n ",num1,num2);
		:
		printf("El segundo número %d es menor que el primero %d\n",num2,num1)
		:
		printf("EL primer número %d es igual al segundo número %d\n",num1,num2);	
	return 0; 	
}
