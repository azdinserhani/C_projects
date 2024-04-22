#include<stdio.h>

main(){
	float age;
	printf("age dans 6 et 12 enfant ");
	printf("\n");
	printf("entre l'age d'enfant :");
	scanf("%f",&age);
	if(age >= 6 && age <= 7){
		printf("poussin");
	}else if(age >= 8 && age <= 9){
		printf("pupille");
	}else if(age >= 10 && age <= 11){
		printf("minime");
	}else if(age >= 12){
		printf("grand");
	}else{
		printf("please entre valeur not Null");
	}
}
