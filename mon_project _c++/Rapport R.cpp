#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<windows.h>
main()
{
	setlocale(LC_CTYPE,"fra");
  float A,B,C,R;
  printf("\n\n\t\t\t Entrer le premier nombre A:");
  scanf("d",&A);
  printf("\n\n\t Entre le deuxieme nombre B:");
  scanf("d",&B);
  printf("\n\n\t Entrer le troisieme nombre C:");
  scanf("d",&C);
  printf("\n\n\t calculer d'un rapport R:");
  scanf("d",&R);
  R=(A*A-B)/(C*C+2);
  printf("la valeur du rapport",R);
  getch();
  

}



