#include<stdio.h>
#include<string.h>
float calcul(char payer[100]){
	float prix;
	if(strcmp(payer,"Tanger") == 0){
		prix = 45.50;
		
	}else if(strcmp(payer,"Rabat") == 0){
		prix = 68.00;
	}else if(strcmp(payer,"Casa") == 0){
		prix = 102.50;
	}
	return prix;
}

main(){
	char p[100];
	printf("\n\n\t la gare");
	printf("\n entre payer : ");
	scanf("%s",&p);
	
	printf("vous payer : %.2f",calcul(p));
	
}
