#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y){
	
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}
main(){
	int num = 2;
	gotoxy(40,5);
	printf("EVEN OR ODD");
	gotoxy(35,7);
	printf("enter the number : ");
	scanf("%d",&num);
	gotoxy(35,9);
	if(num % 2 == 0)
		printf("%d is Even", num);
	else
		printf("%d is Odd",num);
}
	

