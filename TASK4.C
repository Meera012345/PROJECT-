#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h;
	clrscr();

	printf("Enter the value of Basic Salary :");
	scanf("%d",&b);
	printf("Enter the value of DA :");
	scanf("%d",&c);
	printf("Enter the value of HRA :");
	scanf("%d",&d);
	printf("Enter the value of TA :");
	scanf("%d",&e);

	f=(c*b)/100;
	g=(d*b)/100;
	h=(e*b)/100;
	a=b+f+g+h;

	printf("Gross Salary of the Employee =%d ",a);
	getch();

}