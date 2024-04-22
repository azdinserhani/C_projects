#include <stdio.h>

main(){
	int a,a2,b;
	printf("entre value a :");
	scanf("%d",&a);
	printf("entre value b :");
	scanf("%d",&b);
	a2 = a;
	a = b;
	b=a2;
	
	printf("a = %d",a);
	printf("\n");
	printf("b = %d",b);
}
