#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y){
	
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}

main(){
	int an,aa,age;
	gotoxy(40,2);
	printf("Calcul Age");
	gotoxy(20,4);
	printf("Entre anne de naisance :");
	scanf("%d",&an);
	gotoxy(20,6);	
	printf("Entre date actual:");
	scanf("%d",&aa);
	age = aa-an;
	gotoxy(20,8);
	printf("ton age est : %d", age);
}
