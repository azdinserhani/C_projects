#include <stdio.h>

main()
{
	int n;
	printf("entre le Nomber de mois : ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("janvier");
		break;
	case 2:
		printf("fevrier");
		break;
	case 3:
		printf("Mars");
		break;
	case 4:
		printf("avril");
		break;
	case 5:
		printf("Mai");
		break;
	case 6:
		printf("juin");
		break;
	case 7:
		printf("juillet");
		break;
	case 8:
		printf("aout");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("octobre");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("december");
		break;
		break;
	}
}
