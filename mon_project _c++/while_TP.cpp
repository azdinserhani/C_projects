#include <stdio.h>

main(){
	int pn,dn,pp,pg,i;
	
	do{
		printf("entre premier nomber : ");
		scanf("%d",&pn);
	}while(pn <= 0);
	
	do{
		printf("entre deusieme nomber : ");
		scanf("%d",&dn);
	}while(dn <= 0 || pn == dn);
	
	pp = (pn < dn ) ? pn : dn;
	pg = (pn > dn) ? pn : dn;
	i = pp;
	while(i <= pg){
		if(i % 3 == 0){
			printf("%d\n",i);
		}
		i++;
	}
}
