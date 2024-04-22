#include<stdio.h>

main(){
	int array[10],pai,imp;

	for(int i = 0;i< 10;i++){
		printf("entre un entier : ");
		scanf("%d",&array[i]);
	}
	pai = 0;
	imp = 0;
	for(int i = 0;i< 10;i++){
		if(array[i]%2 == 0){
			pai++;
		}else if(array[i]%2 != 0){
			imp++;
		}
		
	}
	printf("Nomber pair : %d\n",pai);
	printf("Nomber impair : %d\n",imp);
	
	
}
