#include <stdio.h>
#include <Windows.h>

main(){
	float moyen;
	printf("entre ton moyen : ");
	scanf("%f",&moyen);
	if(moyen < 10){
		printf("Non admin");
	}else if(moyen <12){
		printf("passable");
	}else if(moyen < 14){
		printf("assey bein");
	}else if(moyen < 16){
		printf("bein");
	}else if(moyen < 18){
		printf("tres bein");
	}else if(moyen < 20){
		printf("Exellent");
	}else{
		printf("moyen invalid");
	}
}
