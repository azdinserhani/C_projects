#include<stdio.h>

main(){
	int N,r;
	printf("enter a number :");
	scanf("%d",&N);
	r = 1;
	for(int i = 1;i <= N;i++){
		r = r*i;
		
	}
	printf("%d",r);
}
