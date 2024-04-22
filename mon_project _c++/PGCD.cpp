#include <stdio.h>
main(){
	int i,n1,n2;
	i = 1;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	while(i <= n1 && i<=n2){
		if(n1 % i == 0 && n2%i == 0){
			printf("%d",i);
		}
		i++;
	}
}
