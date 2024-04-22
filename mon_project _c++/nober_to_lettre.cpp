#include<stdio.h>
#include<string.h>
main(){
	int n1;
	char nl[12];
	printf("Entre un nomber :");
	scanf("%d",&n1);
	if(n1 == 0){
		strcpy(nl,"Zero");
	}else if(n1 == 1){
		strcpy(nl,"Un");
	}else if(n1 == 2){
		strcpy(nl,"deux");
	}else if(n1 == 3){
		strcpy(nl,"trois");
	}else if(n1 == 4){
		strcpy(nl,"quatre");
	}else if(n1 == 5){
		strcpy(nl,"cinq");
	}
	printf("le nober en chifer est : %s",nl);
}

