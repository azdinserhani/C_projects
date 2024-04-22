#include<stdio.h>

main(){
	int s =0,N;
	printf("Entrie un entie   :");
	scanf("%d",&N);
	for(int i=0;i<=N;i++){
		s = s+i;
	}
	printf("%d",s);
}
