#include<stdio.h>
#include<conio.h>
#define enter 13
#define tab 9
#define bksp 8
int main()
{  
	char a[10];					//string to accept the I.D.
	int i=0;					
	char ch;					//character for comparsion
	char password[10];			//array for the password.
printf("enter your ID: \n");
gets(a);
printf("password:");
while(1)
{ 
ch=getch();
if(ch== enter|| ch==tab)
{
	password[i]='\0';
	break;
}
else if (ch==bksp)
{
	if(i>0)
	{
		i--;
		printf("\b \b");
	}
}
else
{
	password[i++]==ch;
	printf("* \b");
}
}
return 0;
}
