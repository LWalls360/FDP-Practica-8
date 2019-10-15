#include <stdio.h>

int main(){
	int a, b , c; //representan tres numero enteros

	scanf("%d %d %d",&a,&b, &c);
	
	if( a > b ){
		if(b > c){
			printf("%d<%d<%d\n",c,b,a);
		}else//c > b {
			if(a > c){
				printf("%d<%d<%d\n",c,b,a);
			}else{
				printf("%d<%d<%d\n",b,a,c);
			}	
	}else{
		if(a > c){
			printf("%d<%d<%d\n",c,a,b);
		}else{
			if( b > c){	
				printf("%d<%d<%d\n",a,c,b);
			}else{
				printf("%d<%d<%d\n",a,b,c);
			}	
		}
	}	
			
	return 0;		
}
