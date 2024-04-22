#include<stdio.h>
#include<string.h>
main(){
	char type[12];
	char ville[12];
	int p;
	printf("entre le type de vehicule :");
	scanf("%s",&type);
	printf("entre ville de entre :");
	scanf("%s",&ville);
	if(strcmp( "classe1",type) == 0){
		if(strcmp("rabat",ville)==0){
			p = 15;
		}else if(strcmp("larache",ville)==0){
			p = 20;
		}else if(strcmp("tanger",ville)==0){
			p = 30;
		}
	}
	if(strcmp( "classe2",type) == 0){
		if(strcmp("rabat",ville) == 0){
			p = 25;
		}else if(strcmp("larache",ville) == 0){
			p = 35;
		}else if(strcmp("tanger",ville) == 0){
			p = 40;
		}
	}
	printf("la valaur vous payee est : %d",p);
}
