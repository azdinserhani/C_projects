#include<stdio.h>
#include<string.h>
void calcul(char payer[100]){
	if(strcmp(payer,"Tanger") == 0){
		return 45.50;
	}else if(strcmp(payer,"Rabat") == 0){
		return 68.00;
	}else if(strcmp(payer,"Casa") == 0){
		return 102.50;
	}
}

main(){
	char p[100];
	printf("\n\n\t la gare");
	printf("\n entre payer : ");
	scannf("%s",&p);
	
	printf("vous payer : %.2f",calcul(p);)
	
}
