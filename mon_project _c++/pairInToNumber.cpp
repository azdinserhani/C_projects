#include<stdio.h>

main(){
	int N,r;
	printf("enter a number :");
	scanf("%d",&N);
	for(int i = 0; i <= N;i++){
		if(i % 2 == 0){
			r = i;
			printf("%d ",r);
		}
	}
}
