#include<stdio.h>
#include<conio.h>

void main()
{
	int c,f;
	clrscr();

	printf("Enter the value of temperature in Celsius :");
	scanf("%d",&c);
	f=c*9/5+32;
	printf("Translate the value in fahrenheit:%d",f);
	getch();
}
