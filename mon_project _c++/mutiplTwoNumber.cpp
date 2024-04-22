#include <stdio.h>

main(){
	int m,n,r;
	printf("entre value de premiere nomber :");
	scanf("%d",&m);
	printf("entre value de deuseme nomber :");
	scanf("%d",&n);
	r = m *n;
	
	
	
	if(r>0){
		printf("positif");
	}else{
		printf("negatif");
	}
}
