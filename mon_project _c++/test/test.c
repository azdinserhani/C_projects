#include <stdio.h>
#include <windows.h>
main(){
	int i,s,n;
	i = 5;
	s = 1;
	do{
		s = s * i;
		
		i++;
	}while(i > 0);
	printf("%d\n",s);
}