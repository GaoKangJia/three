#include"f.h"

#include<stdlib.h>
int main()
{

	srand((unsigned int)time(NULL));

	
	int op = 0;
	menu();
	do
	{
		printf("**********************************\n");
		printf("**********************************\n");
		printf("**********************************\n");
		printf("*****    1.   start game      ****\n");
		printf("*****    0.   exit  game      ****\n");
		printf("**********************************\n");
		printf("**********************************\n");
		printf("**********************************\n");
		printf("������:>");
		scanf("%d", &op);
		system("cls");
		if (op == 1)
		{
			game();
		}
		else if (op != 0)
		{
			printf("�ú����в��У�\n");
		}

	} while (op);





	return 0;
}