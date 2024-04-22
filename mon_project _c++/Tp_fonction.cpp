#include <stdio.h>

float moyenne(float Notes[]){
	float s;
	s = 0;
	for(int i = 0; i<8;i++){
		printf("Entrez la note de n%d : ",i+1);
		scanf("%f",&Notes[i]);
		s = s +Notes[i];
	}	
	return(s/8);
	
} 
main(){
	float m,tn[8];
	
	m = moyenne(tn[8]);
	printf("La moyenne est : %.2f",m);
}
