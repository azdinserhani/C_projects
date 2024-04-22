#include<stdio.h>
main(){
	int s,N;
	printf("Entre in nomber  : ");
	scanf("%d",&N);
	for(int i =0 ;i<10;i++){
		s = N*i;
		printf("%d * %d = %d \n",N,i,s);
	}
}
