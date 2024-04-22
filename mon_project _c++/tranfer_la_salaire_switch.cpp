#include<stdio.h>
#include<string.h>
main(){

	int q,r; // q = nomber de mille r = le reste
	float sch; // sch  = salaire de emploiyee en chaifre 
	char sl[20]; // sl = salaire en lettre
	printf("\n\n\n\t\t\t Tranfer le sallaire en chiffre \n");
	printf("\t Entre le salaire     : ");
	scanf("%f", &sch);
	
	if (sch < 2500 || sch > 7000){
		printf("Salaire invalid");
	}else{
		q = (int)sch/1000;
		r = (int)sch%1000;
		switch(q){
			case 2:
				strcpy(sl," Deux mille");
				break;
			case 3:
				strcpy(sl," Trois mille");
				break;
			case 4:
				strcpy(sl," Quatre mille");
				break;
			case 5:
				strcpy(sl," Cinq mille");
				break;
			case 6:
				strcpy(sl," Six mille");
				break;
			case 7:
				strcpy(sl," Sept mille");
				break;		
		}
		if( r != 0 && r != 500){
			printf("Salaire Invalid");
		}else if( r == 500){
			strcpy(sl,strcat(sl, " Cinq cent")); 
		}
	}
	printf("\t%s",sl);
}
