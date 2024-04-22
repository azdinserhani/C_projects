#include<stdio.h>

main(){
	int i;
	char s[12];
	i = 1;

	do
	{	
	    if(i % 10 == 0){
			printf("\n");
		}
		if(i % 2 != 0){
		printf("%d\t",i);
		}
		
		i++;
	}while(i <= 325);
}
