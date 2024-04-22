#include<stdio.h>

main(){
	
	int i,r,m;
	printf("entre le monber de multiply : ");
	scanf("%d",&m);
	i = 0;
	while(i<=10){
		r = i * m;
		printf("%d x %d = %d\n",m,i,r);
		i++;
	}
}
