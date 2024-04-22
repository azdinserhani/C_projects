#include<stdio.h>
#include<windows.h>

main(){
	float n;
	printf("Entre le nombre de photocopy : ");
	scanf("%f",&n);
	if(n <= 10 ){
		n = n*0.25;
		printf("la facture est %.2f DH ",n);
	}else if(n <= 20){
		n = n*0.20;
		printf("la facture est %.2f DH ",n);
	}else {
		n = n*0.10;
		printf("la facture est %.2f DH ",n);
	}
	
}
