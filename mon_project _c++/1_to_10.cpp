#include<stdio.h>

main(){
	int i,s,n;
	printf("entre le nombre de facturial : ");
	scanf("%d",&n);
	s = 0;    
	i = 1;    
	while(i <= n){  
	    s = s+i;    
		i= i+1;                                                                               
	
	}	
	printf("%d",s);
}
