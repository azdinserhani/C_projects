#include<stdio.h>


main(){
	int tab[5] = {1,17,13,4,56},*pt;
	pt = tab;
	pt++;
	printf("%d\n",*pt);
	++(*pt);
	printf("%d\n",*pt);
	printf("%d\n",*(pt+1));
	pt = pt +1;
	(*pt)++;
	printf("%d\n",*pt);
	printf("=====element de tableau ==============");
	for(int i= 0;i<=4 ;i++){
		printf("\n%d",tab[i]);
	}
}
