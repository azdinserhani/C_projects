#include<stdio.h>
#include<string.h>
void replace(char str1[],char str2[]){
				char vch[100];
				strcpy(vch,str1);
				strcpy(str1,str2);
				strcpy(str2,vch);
}
main(){
	char cd[380][100],tit[380][100],aut[380][100],vch;
	float prix[380],vr;
	
	for(int i = 0;i<2;i++){
		printf("Entre le code du livre  :");
		scanf("%s",&cd[i]);
		printf("Entre le titre du livre :");
		scanf("%s",&tit[i]);
		printf("Entre l'auteur du livre :");
		scanf("%s",&aut[i]);
		printf("Entre le prix du livre  :");
		scanf("%f",&prix[i]);
	}
	for(int i =0 ;i<2;i++){
		for(int j = i+1;j<2;j++){
			if(prix[i]<prix[j]){
				vr = prix[i];
				prix[i] = prix[j];
				prix[j] = vr;
		
				replace(cd[i],cd[j]);
				replace(tit[i],tit[j]);
				replace(aut[i],aut[j]);
			}
		}
	}
	for(int i =0;i<2;i++){
		if(prix[0] == prix[i]){
			printf("code: %s titre: %s auteur: %s prix: %.2f DH\n",cd[i],tit[i],aut[i],prix[i]);
		}
	}
}
