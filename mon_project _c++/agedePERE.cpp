#include <stdio.h>

main(){
	int anp,aa,anf,agep,agef,na;
	printf("entre date de naisance de pere :");
	scanf("%d",&anp);
	printf("entre date de naisance de fils :");
	scanf("%d",&anf);
	printf("entre date actual:");
	scanf("%d",&aa);
	agep = aa - anp ;
	agef = aa - anf ;
	na = agep - 2 * agef;
	printf("nomber annee  :%d",na);
	printf("\n");
	printf("age de pere   :%d",agep);
	printf("\n");
	printf("age de fils   :%d",agef);
		
}
