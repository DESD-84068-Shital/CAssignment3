/*
 15. Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/


#include<stdio.h>
int main()
{
here:
  int choice;
  float num1,num2;
  printf("Enter first number:\n");
  scanf("%f",&num1);

  printf("Enter second number:\n");
  scanf("%f",&num2);

  printf("enter your choice:\n");
  printf("0.Exit\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
 scanf("%d",&choice);
  switch(choice)
  {

   case 0:
   printf("Bye.....\n");
	break;

   case 1:
    int Sum=num1+num2;
	printf("Addition of two numbers:%.2d\n",Sum);
	break;

   case 2:
    int Sub=num1-num2;
	printf("Subtraction of two numbers:%.2d\n",Sub);
	break;

   case 3:
    int Mul=num1*num2;
	printf("Multiplication of two numbers:%.2d\n",Mul);
	break;
   
   case 4:
    int Div=num1/num2;
	if(num2!=0)
	{
    	printf("Division of two numbers:%.2d\n",Div);
    	
    }
	
	else
	{
       printf("%d can't divide by 0\n",num1);
	}
     break;
 
   default:
   printf("Please enter valid choice\n");
   break;
  }

  char ch;
  printf("Do you want to continue?\n");
  scanf("%*c%c",&ch);
  if(ch=='Y' || ch=='y')
 goto here;
  return 0;
}
