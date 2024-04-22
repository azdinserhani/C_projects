#include <stdio.h>
#include <Windows.h>

main(){
	int a;
	printf("entre un nomber :");
	scanf("%d", &a);
	
	if (a < 0){
		printf("la valeur absulu est : %d",-a);
	}else if(a>0){
		printf("la valeur absulu est : %d",a);
	}
}
