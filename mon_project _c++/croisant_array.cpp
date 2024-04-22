#include<stdio.h>
main(){
	int array[10],aux;

	for(int i = 0;i<10;i++){
		printf("entre un entier : ");
		scanf("%d",&array[i]);
	}
	for(int i = 0;i<10;i++){
		for(int j=i+1 ;i<10;j++){
			if(array[j]<array[i]){
				aux = array[i];
				array[i]= array[j];
				array[j] = aux;
			}
		}
	}
	for(int i = 0;i<10;i++){
		printf("%d",array[i]);
	}
	
}
