#include<stdio.h>

main(){
	int array[10],r,s;
	r = 0;
	s= 0;
	for(int i = 0;i<10;i++){
		printf("entre un entier : ");
		scanf("%d",&array[i]);
		r = array[i];
	}
	for(int i = 0;i< 10;i++){
		if(array[i]> s){
			s = array[i];
		}
	}
	printf("%d",s);
	
}
