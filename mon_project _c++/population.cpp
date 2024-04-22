#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y){
	
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}

main(){
	int nt,nf,nh;
	float ph;
	gotoxy(40,2);
	printf("population");
	gotoxy(20,4);
	printf("Entre nomber total 	     : ");
	scanf("%d",&nt);
	gotoxy(20,6);	
	printf("Entre porsntage de homme : ");
	scanf("%f", &ph);
	nf = nt-ph*nt;
	nh = nt-nf;
	gotoxy(20,8);
	printf("Nomber de femme          : %d", nf);
	gotoxy(20,10);
	printf("Nomber de home           : %d", nh);
}
