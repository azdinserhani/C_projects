#include<stdio.h>
#include<windows.h>
main(){
	float r=0;
	int n,s;
	s= 0;
	do{
		printf("entre un nomber : ");
		scanf("%d",&n);
	}while(n <2);
	
	for(int i = 0; i <= n; i++){
		s+=i;
		
	}
	r = 1.0 / s;
	printf("%f",r);



}
