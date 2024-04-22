#include <stdio.h>
main(){
	int i = 0;
	while(i*i <= 3675){	
		if(i*i >= 31){
		printf("%d\n",i*i);
		}
		i++;
	}
}
