#include<stdio.h>

main(){
	int array[10],s,r;
	
	s = 0;
	for(int i = 0; i < 10;i++){
		printf("Entre un entier : ");
		scanf("%d",&array[i]);
	}
	printf("entre le nomber de cherche : ");
	scanf("%d",&r);
	for(int i = 0; i < 10 ;i++){
		if(r == array[i]){
			s++;
		}
	}
	printf("%d",s);
}
