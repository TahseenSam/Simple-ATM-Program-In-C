#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int password();
void welcome();
void deposit(int x);
void withdraw();
void balance();

int amount=10000;
int pass;
int ch;	
char name[40];
int x,y;
int card=1239;

void main()
{
	system("COLOR E");
	char check='y';	
	welcome();
	
	printf("\nEnter Your Name To Access Your Account :");
	//scanf("%s",&name);
	gets(name);
	getch();
	
	
	pass=password();
	
	if(pass==1)
{
		while(check=='y' || check=='Y')
		{
		system("cls");
		welcome();
		printf("Choose What Do you want :\n");
		printf("1. Deposit \n");
		printf("2. Transaction \n");
		printf("3.Check Your Current Balance \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			printf("Enter The Amount You Want To Deposit :");
			scanf("%d",&x);
			deposit(x);
			break;
		
			case 2:
			printf("Enter The Amount You Want To Withdraw :");
			scanf("%d",&y);
			withdraw(y);
			break;
			
			case 3:
			balance();
			break;
			
			default:
			printf("Maaf kajao !!!");
			break;			
		}
		
		printf("\n\nDo You want any other transaction ?? \'Y\' or \'y\'\n");
		getchar();
		scanf("%c",&check);
	}
}
	
	else
	{
		getch;
		exit(0);
	}
}

int password()
{
	
	int pass; int i=0;
	printf("Enter Your Password :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&pass);
		fflush(stdin);
		if(pass==1234)
		{
			system("cls");
			
			welcome();
			i=1;
			return i;
			break;
		}
		if(pass!=1234)
		{
			system("cls");
			welcome();
			printf("\nIncorrect Password!!!!!\nPress Any key to re enter your password");
			Beep(2000,200);
			getch();
			system("cls");
			welcome();
			printf("\n\n\nRe Enter Your Password :\t");
			if(i==4){
				system("cls");
				printf("You have entered incorrect pass 5 times \nNow re open your application\nThankyou!!!");
				i=0;
				return i;
				getch();
			}
		}
		}
}

void welcome()
{
	
	
	int i;
	printf("\t\t\t");
	
	for(i=0;i<60;i++){
		printf("\xDB");
	}
	
	printf("\n\t\t\t\xDB  Welcome To C ATM  \xDB Made By. Tahseen Abbas Hyder \xDB\n");
	printf("\t\t\t");
	
	for(i=0;i<60;i++){
		printf("\xDB");
	}
	
	printf("\n\n\n");
}

void deposit(int x)
{
	if(x>=0)
	{
		
	amount += x ;
	printf("Operation Done Successfully");
	getch();
	
	balance();
	
	}
	else
	{
	printf("Invalid Amount ");
	}
}


void withdraw(int y)
{
	if(y>amount)
	{
		printf("Not Enough Amount ");
	}
	else
	{
		amount -= y;
		printf("Take Your Money : ",y);
		getch();
		balance();
	}
}


void balance()
{
	int i;
	system("cls");
	//welcome();	
	for(i=0;i<41;i++)
	{
		printf("\xDB");
	}
	
	printf("\n\xDB \t  Balance Reciept\t\t\xDB\n");
	printf("\xDB                         \t \t\xDB\n");
	for(i=0;i<=40;i++)
	{
		printf("\xDB");
	}
	printf("\n\xDB                         \t \t\xDB\n");
	printf("\xDB                         \t \t\xDB\n");
	printf("\xDB Name :\t\t %s \t\xDB\n",name);
	printf("\xDB Card # :\t\t   %d   \t\xDB\n",card);
	printf("\xDB                         \t \t\xDB\n");
	printf("\xDB_______________________________________\xDB\n");
	printf("\xDB Current Balance :\t  %d   \t\xDB\n",amount);
	printf("\xDB                         \t \t\xDB\n");
	printf("\xDB                         \t \t\xDB\n");
	for(i=0;i<41;i++)
	{
		printf("\xDB");
	}
}
