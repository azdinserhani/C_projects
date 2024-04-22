#include <stdio.h>

main(){
	int i,s,n;
	printf("entre le nomber :");
	scanf("%d",&n);
	s=1;
	for(i = 0 ; i <10 ; i++ ){
		s = n*i;
	printf("%d \n",s);	
	}
	
}
