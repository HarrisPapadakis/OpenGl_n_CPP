#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	
	srand(time(NULL));
	int num,userInput=0;
	char symbol;
	symbol=3+rand()%4;
	num=1+rand()%13;
	
	
	while(userInput!=1)
	{
		
	if(userInput>=1 )exit (0);	
	system("cls");	
	if (symbol == 3 || symbol ==4)system("color f4");
		else
		{ 
		system("color f0");
		}	
	if(num>1&&num<10)
	{
		
	printf("\t\t\t ____________________ \n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|   %d               |\n",num);
	printf("\t\t\t|   %c               |\n",symbol);
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|         %d         |\n",num);
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|               %c   |\n",symbol);
	printf("\t\t\t|               %d   |\n",num);
	printf("\t\t\t|____________________|\n");
	printf("Next Card: Nai(0), Exit(1)\n");
	symbol=3+rand()%4;
	num=1+rand()%13;
	scanf("%d",&userInput);
	
					}
	else if(num==1 || num>10)
	{
		
		if (num ==1) num = 'A';
		if (num==11) num = 'J';
		if (num==12) num = 'Q';
		if (num==13) num = 'K';
	printf("\t\t\t ____________________ \n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|   %c               |\n",num);
	printf("\t\t\t|   %c               |\n",symbol);
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|        %c          |\n",num);
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|              %c    |\n",symbol);
	printf("\t\t\t|              %c    |\n",num);
	printf("\t\t\t|____________________|\n");
	printf("Next Card: Nai(0), Exit(1)\n");
	symbol=3+rand()%4;
	num=1+rand()%13;
	scanf("%d",&userInput);
								}
	else {
	printf("\t\t\t ____________________ \n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|   %d               |\n",num);
	printf("\t\t\t|   %c               |\n",symbol);
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|        %d          |\n",num);
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|              %c    |\n",symbol);
	printf("\t\t\t|              %d    |\n",num);
	printf("\t\t\t|____________________|\n");
	printf("Next Card: Nai(0), Exit(1)\n");
	symbol=3+rand()%4;
	num=1+rand()%13;
	scanf("%d",&userInput);	
		}	
		
}
	return 0;
}		
