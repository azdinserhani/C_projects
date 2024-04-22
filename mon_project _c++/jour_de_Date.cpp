//calcul le jours en date donne 
#include<stdio.h>
#include<string.h>
main(){
	int k,m,an,jr;
	char jl[12];
	printf("entre anne  :");
	scanf("%d",&an);
	printf("entre mois  :");
	scanf("%d",&m);
	printf("entre jour  :");
	scanf("%d",&jr);
	k = jr + 2*m +(3*m+3)/5 + an +an/4 + an/100 +1;
	jr = k%7 +1;
	switch(jr){
		case 1:
			strcpy(jl,"demanche");
			break;
		case 2:
			strcpy(jl,"lundi");
			break;
		case 3:
			strcpy(jl,"mardi");
			break;
		case 4:
			strcpy(jl,"mercredi");
			break;
		case 5:
			strcpy(jl,"jeudi");
			break;
		case 6:
			strcpy(jl,"vendredi");
			break;
		case 7:
			strcpy(jl,"samedi");
			break;
	}
	printf("%s",jl);
	
}

