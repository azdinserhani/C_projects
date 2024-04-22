#include<stdio.h>

main(){
	float array[10],som;
	som = 0;
	for(int i =0;i<10;i++){
		printf("entre le entier : ");
		scanf("%f",&array[i]);
		som = som + array[i];
	}
	printf("la middle is : %.1f",som/10);
}
