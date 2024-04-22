#include<stdio.h>
main(){
	int cc;    //code de cleint
	float pap; // prix a payee
	printf("Entre code de cleints   :");
	scanf("%d",&cc);
	switch(cc){
		case 1: 
		pap = 30;
		break;
		case 2: 
		pap = 40;
		break;
		case 3: 
		pap = 50;
		break;
		case 4: 
		pap = 70;
		break;
		default:
			printf("Code Null");
	}
	printf("%.2f DH",pap);
}
