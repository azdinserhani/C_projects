#include <stdio.h>
#include <Windows.h>

main(){
	int m,n;
	printf("Entre le premier Nomber :");
	scanf("%d",&m);
	printf("Entre le deuseime Nomber :");
	scanf("%d",&n);
	
	if(m*n > 0){
		printf("possitiv");
	}else if(m*n < 0){
		printf("negatif");
	}else{
		printf("un nombre egale 0 ");
	}
}
