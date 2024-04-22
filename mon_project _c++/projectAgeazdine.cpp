#include <stdio.h>

main(){
	int an,aa,age;
	printf("Entre anne de naisance :");
	scanf("%d",&an);
	printf("Entre date actual:");
	scanf("%d",&aa);
	age = aa-an;
	printf("ton age est : %d", age);
}
