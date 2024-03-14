/*
 11. Write a program to find factorial of given number.
*/


#include<stdio.h>
int main()
{
 int num1;
int fact=1;
 printf("Enter the number:\n");
 scanf("%d",&num1);

printf("factorial of %d: ",num1);
 for(int i=1;i<=num1;i++)
   {
    fact*=i;
   }
   printf("%d",fact);

}
