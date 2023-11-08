#include<stdio.h>
#include<conio.h>
void main()
{
	int base_salary,HRA,TA,DA,gross_salary;
	clrscr();

	printf("Enter the value of base salary:");
	scanf("%d",&base_salary);

	HRA = (10*base_salary)/100;
	DA = (5*base_salary)/100;
	TA = (8*base_salary)/100;
	gross_salary=base_salary+HRA+DA+TA;

	printf("the gross salary is : %d",gross_salary);
	getch();
	}
