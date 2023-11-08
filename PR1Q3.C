#include<stdio.h>
#include<conio.h>
void main()
{
	int first_angle,second_angle,third_angle;
	clrscr();
	 printf("Enter the value of first angle:");
	 scanf("%d",&first_angle);

	 printf("Enter the value of second angle:");
	 scanf("%d",&second_angle);


	 third_angle=180 -(first_angle+second_angle);
	 printf("the value third angle is : %d",third_angle);
getch();
}
