#include<stdio.h>

main(){
	int i = 1,s =0,N;
	printf("entre un entier");
	scanf("%d",&N);
	while(i <= N){
		s = s+i;
		i++;
	}
	printf("la  somme est : %d",s);
}
