#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y){
	
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}
main (){
	char raisaux[10][15],adresse[10][15];
	float chaifr[10],impot[10];
	int numero[10];
	gotoxy(50,2);
	printf("Calcul Impot de entreprise");
	for(int i = 0; i< 3 ; i++){
		gotoxy(20,3);
		printf("Entre le numero de sosiete %d           : ",i+1);
		gotoxy(60,3);
		scanf("%d",&numero[i]);
		gotoxy(20,5);
		printf("Entre le rasaux social de sosiete %d    : ",i+1);
		gotoxy(60,5);
		scanf("%s",&raisaux[i]);
		gotoxy(20,7);
		printf("Entre l'adresse de sosiete %d           : ",i+1);
		gotoxy(60,7);
		scanf("%s",&adresse[i]);
		gotoxy(20,9);
		printf("Entre le chaifre d'affaire de sosiete %d: ",i+1);
		gotoxy(60,9);
		scanf("%f",&chaifr[i]);
			
		if(chaifr[i] <= 300000){
			impot[i] = chaifr[i] * 0.10;
		}else if( chaifr[i] <= 1000000){
			impot[i] = chaifr[i] * 0.175 - 22500;
		}else {
			impot[i] = chaifr[i] * 0.31 - 157500;
		}
		system("cls");
	}
	system("cls");
	for(int i = 0;i<3;i++){
		gotoxy(60,i+7);
		printf("Impot de societe %s est :%.2f Dh\n",raisaux[i],impot[i]);
	}
	
}
