#include<stdio.h>

main(){
	char nom[100];
	float note[100],moy;
	moy = 0;
	int n;
//	printf("entre le nombre total de condidat :");
//	scanf("%d",&n);
	for(int i = 0; i<4;i++){
		printf("Entre le nom de condidat %d:",i+1);
		scanf("%s",&nom[i]);
		printf("Entre le note de condidat %d:",i+1);
		scanf("%f",&note[i]);
		moy =  moy + (note[i]/100);
	}
	for(int i= 0; i < 4;i++){
		if(note[i] > moy){
			printf("%s est admi",nom[i]);
		
		}else{
			printf("%s est journee",nom[i]);
		}
	}
}
