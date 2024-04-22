#include<stdio.h>
#include<string.h>
#include<windows.h>
void replace(char str1[],char str2[]){
				char vch[100];
				strcpy(vch,str1);
				strcpy(str1,str2);
				strcpy(str2,vch);
}

void gotoxy(int x, int y){
	
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}

main(){
	char rs[89][100],add[89][100],vch;
	int numero[89],ac[89],nch,anne[89];
	float chiff[89],ech,impot[89];
	gotoxy(50,4);
	printf("Calcule Impot sur ke societe");
	for(int i =0 ;i<2;i++){
		gotoxy(30,6);
		printf("Entre le raisaux social    :");
		gotoxy(30,7);
		printf("Entre l'adrese de societe  :");
		gotoxy(30,8);
		printf("Entre annee                :");
		gotoxy(30,9);
		printf("Entre le numero de societe :");
		gotoxy(30,10);
		printf("Entre le chiffre d'affaire :");
		gotoxy(59,6);
		scanf("%s",&rs[i]);
		gotoxy(59,7);
		scanf("%s",&add[i]);
		gotoxy(59,8);
		scanf("%d",&ac[i]);
		gotoxy(59,9);
		scanf("%d",&numero[i]);
		gotoxy(59,10);
		scanf("%f",&chiff[i]);
		system("cls");
	}
		for(int i = 0; i<2;i++){
		
		if(ac[i] <= 3){
			impot[i] = 0;
		}else if(chiff[i] <= 300000 ||ac[i] > 3 ){
			impot[i] = chiff[i] * 0.10;
		}else if(chiff[i] <= 1000000|| ac[i] > 3){
			impot[i] = chiff[i] * 0.175 - 22500;
		}else if(chiff[i] > 1000000 || ac[i]> 3 ){
			impot[i] = chiff[i] *0.31 -157500;
		}
	}

	for(int i = 0;i<2;i++){
		for(int j = i+1;j<2;j++){
			if(chiff[i] < chiff[j]){
				ech = chiff[i];
				chiff[i] = chiff[j];
				chiff[j] = ech;
				
				ech = impot[i];
				impot[i] = impot[j];
				impot[j] = impot[i];
				
				replace(rs[i],rs[j]);
				replace(add[i],add[j]);
				
				nch = numero[i];
				numero[i] = numero[j];
				numero[j] = nch;
				
				nch = ac[i];
				ac[i] = ac[j];
				ac[j] = nch;
			}
		}
	}


	for(int i =0 ;i< 2;i++){
		if(impot[i] == 0){
			printf("Societe exonerees est : %s\n",rs[i]);
		}else{
			printf("impot de socite %s est : %.2fDH\n",rs[i],impot[i]);
		}
	}
}
