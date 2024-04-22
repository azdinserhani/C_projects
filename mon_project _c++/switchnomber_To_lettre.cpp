#include<stdio.h>
main(){
	int a;
	printf("enter a nomber   : ");
	scanf("%d",&a);
	switch(a){
		case 0: 
		printf("Zero");
		break;
		case 1: 
		printf("Un");
		break;
		case 2: 
		printf("Deux");
		break;
		case 3: 
		printf("Trois");
		break;
		case 4: 
		printf("Quatre");
		break;
		case 5: 
		printf("Cinq");
		break;
		default:
			printf("please entre a nomber entre 0 et 5");
	}
}
