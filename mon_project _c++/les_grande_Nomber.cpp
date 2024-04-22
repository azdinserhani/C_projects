#include <stdio.h>
#include <Windows.h>

main(){
	float pn,dn;
	printf("entre le premier Nomber : ");
	scanf("%f",&pn);
	printf("entre le deseime Nomber : ");
	scanf("%f",&dn);
	
	if (pn > dn){
		printf("grnde Nomber est %.2f :",pn);
	}else if (pn < dn){
		printf("grnde Nomber est %.2f :",dn);
	}else {
		printf("Null");
	}
}
