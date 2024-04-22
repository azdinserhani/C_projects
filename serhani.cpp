#include<stdio.h>
#include<windows.h>
#include<string.h>
void gotoxy(int x,int y){
	COORD m = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}
main(){
	int choix,nc,ref,quantite,command,count;
	char mot[3],nom[100],date[20],pre[100];
	char des[100],np[3],nouv[3],Nemp[3];
	float pu,mont,tc;
	char NomEmp[100], PreEmp[100],AdressEmp[100],TypeQua[100],arrire[3];
	float RevEmp,Impo;
	count = 9;
	int NombreC, NombreE;
	NombreC =0;
	NombreE = 0;
	choix = 0;
	command = 0;
do{	do{
		printf("1: Traitement des commandes \n");
		printf("2: Gestion des employés     \n");
		printf("3: Afficher le nombre des commandes et le nombre des employés \n");
		printf("4: Quitter \n");
		printf("\tEntre votre choix : ");
		scanf("%d",&choix);
		}while(choix > 4 && choix <= 0);
			
	switch(choix){
		case 1:
			system("cls");
			do{
				system("cls");
				gotoxy(40,2);
				printf("commande client\n");
				gotoxy(10,6);
				printf("Numero client : ");
				gotoxy(10,7);
				printf("Nom client    : \n");
				gotoxy(50,6);
				printf("Date    : ");
				gotoxy(50,7);
				printf("Prenom  : ");
				gotoxy(26,6);
				scanf("%d",&nc);
				gotoxy(26,7);
				scanf("%s",&nom);
				gotoxy(60,6);
				scanf("%s",&date);
				gotoxy(60,7);
				scanf("%s",&pre);
				gotoxy(10,9);
				printf("Reference");
				gotoxy(30,9);
				printf("designation");
				gotoxy(50,9);
				printf("Prix unitaire");
				gotoxy(70,9);
				printf("Quantite");
				gotoxy(90,9);
				printf("Montant");
				gotoxy(10,16);
				printf("Total commande: ");
				gotoxy(10,18);
				printf("Nouveau produit O/N ? : ");
				do{
				gotoxy(10,count+1);
				scanf("%d",&ref);
				gotoxy(30,count+1);
				scanf("%s",&des);
				gotoxy(50,count+1);
				scanf("%f",&pu);
				gotoxy(70,count+1);
				scanf("%d",&quantite);
				gotoxy(90,count+1);
				//afficher montant
				mont = pu * quantite;
				command = command + mont;
				printf("%.2f DH",mont);
				gotoxy(27,16);
				//afficher total montant
				printf("%.2f DH",command);
				gotoxy(36,18);
				scanf("%s",&np);
				count++;
				NombreC++;
				}while(strcmp(np,"O") == 0);
				gotoxy(10,22);
				printf("Nouveau command O/N :\n ");
				scanf("%s",&nouv);	
				}while(strcmp(nouv,"O") ==0);
				if(strcmp(nouv,"N")==0){
					choix = 0;
				}
				system("cls");
				break;
			
		case 2:
			do{
				system("cls");
				gotoxy(40,2);
				printf("Gestion des employes  :");
				gotoxy(10,5);
				printf("Nom de l'employes     :");
				gotoxy(10,7);
				printf("Prenom ds l'employes  :");
				gotoxy(10,9);
				printf("Addresse de employes  :");
				gotoxy(10,11);
				printf("Type de aualification :");
				gotoxy(10,13);
				printf("Revenu net imposable  :");
				gotoxy(10,15);
				printf("Impot sur le revenu   :");
				gotoxy(35,5);
				scanf("%s",&NomEmp);
				gotoxy(35,7);
				scanf("%s",&PreEmp);
				gotoxy(35,9);
				scanf("%s",&AdressEmp);
				gotoxy(35,11);
				scanf("%s",&TypeQua);
				gotoxy(35,13);
				scanf("%f",&RevEmp);
				
				if(RevEmp <= 2500.00){
					Impo = 0.00;
				}else if(RevEmp >= 2501.00 && RevEmp <4166.00){
					Impo = (RevEmp * 0.10) - 250.00;
				}else if(RevEmp >= 4166.00 && RevEmp < 5000){
					Impo = (RevEmp * 0.20 )- 666.67;
				}else if(RevEmp >= 5000 && RevEmp < 6666.00){
					Impo = (RevEmp * 0.30)-1667.67;
				}else if(RevEmp >= 6666.00 && RevEmp < 15000){
					Impo = (RevEmp * 0.34 )- 1433.33;
				}else{
					Impo = (RevEmp * 0.38 )- 2033.33;
				}
				gotoxy(35,15);
				printf("%.2f Dh",Impo);
				
				gotoxy(10,20);
				printf("Nouvel employee     :");
				gotoxy(32,20);
				scanf("%s",&Nemp);
				NombreE++;
			}while(strcmp(Nemp,"O") == 0);
			if(strcmp(Nemp,"N")==0){
					choix = 0;
				}
				system("cls");
			break;
		case 3:
			system("cls");
			gotoxy(50,10);
			printf("Nombre de commande : %d",NombreC);
			gotoxy(50,12);
			printf("Nombre de employee : %d",NombreE);
			gotoxy(50,15);
			printf("Re ter arrire O/N : ");
			if(strcmp(arrire,"N")==0){
					choix = 0;
				}
			
			break;
		case 4:
			break;
	}
	

	
}while(choix==0);
	
}




