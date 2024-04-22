#include <stdio.h>
#include <Windows.h>

main(){
	int a,b,c,d;
	printf("Entre la valeur de a :");
	scanf("%d",&a);
	printf("Entre la valeur de b :");
	scanf("%d",&b);
	c = (b-a)/4;
	c = (c*10)/(a-b-1);
	d = b-a-c;
	d = d/6 + 5;
	printf("%d" ,a);
	printf("\n");
	printf("%d" ,b);
	printf("\n");	
	printf("%d",c);
	printf("\n");	
	printf("%d",d);	
}
