#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y){
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}
main(){
	int tc, age;
	float pi;
	gotoxy(31,4);
	printf("calcul poid edial");
	gotoxy(27,6);
	printf("Entre ton taille en cm  : ");
	gotoxy(27,8);
	printf("Entre ton age           : ");
	gotoxy(27,10);
	printf("ton poid ideal          : ");
	gotoxy(54,6);
	scanf("%d",&tc);
	gotoxy(54,8);
	scanf("%d",&age);
	pi = (tc-100+age/10)*0.9;
	gotoxy(54,10);
	printf("%.2f", pi);
}
