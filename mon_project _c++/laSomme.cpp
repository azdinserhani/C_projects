#include<stdio.h>

main(){
	int N,r;
	printf("enter a number :");
	scanf("%d",&N);
	r = 0;
	for(int i = 1;i <= N;i= i+2){
		r = r+i;
		
	}
	printf("%d",r);
	
}
