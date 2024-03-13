/*
 4. Write a program to find factorial of given number.
    Input: 5
    Output: 1 * 2 * 3 * 4 * 5 = 120
*/

#include<stdio.h>
int main()
{
  int num,i,fact=1;
  printf("Enter the number: \n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
     fact=fact*i;
  }
	printf("factorial:%d=%d\n",num,fact);
}
