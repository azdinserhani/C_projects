#include<stdio.h>


main(){
	int n1,n2,n3;
	float n4;
	printf("Entre a number :");
	scanf("%d",&n1);
	n2 = n1%1000;
	n3 = n2%100;
	n4 = n3*0.1;
	n1 = n1/1000;
	n2 = n2/100;
	n3 = n3/10;
	if(n1 == 1){
		printf("mille ");
	}else if(n1 == 2){
		printf("deux mille ");
	}else if(n1 == 3){
		printf("trois mille ");
	}else if(n1 == 4){
		printf("quatre mille ");
	}else if(n1 == 5){
		printf("cinq mille ");
	}else if(n1 == 6){
		printf("six mille ");
	}else if(n1 == 7){
		printf("cept mille ");
	}else if(n1 == 8){
		printf("huit mille ");
	}else if(n1 == 9){
		printf("neuf mille ");
	}
	if(n2 == 1){
		printf("cent ");
	}else if(n2 == 2){
		printf("deux cent ");
	}else if(n2 == 3){
		printf("trois cent ");
	}else if(n2 == 4){
		printf("quatre cent ");
	}else if(n2 == 5){
		printf("cinq cent ");
	}else if(n2 == 6){
		printf("six cent ");
	}else if(n2 == 7){
		printf("cept cent ");
	}else if(n2 == 8){
		printf("huit cent ");
	}else if(n2 == 9){
		printf("neuf cent ");
	}
	if(n3 == 1){
		printf("dix ");
	}else if(n3 == 2){
		printf("vingt ");
	}else if(n3 == 3){
		printf("trent ");
	}else if(n3 == 4){
		printf("quarante ");
	}else if(n3 == 5){
		printf("cinqante ");
	}else if(n3 == 6){
		printf("sixant ");
	}else if(n3 == 7){
		printf("sixant-dix ");
	}else if(n3 == 8){
		printf("quatre vingt ");
	}else if(n3 == 9){
		printf("quatre vingt-dix");
	}

	
	
}
