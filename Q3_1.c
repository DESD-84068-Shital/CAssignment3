/*
 1.
Write a program to accept a character and a number, and print the character number times
Input:Character: *
Number: 6
Output:******
*/

#include<stdio.h>
int main()
{
  int num;
  char ch;
  printf("enter the number\n");
  scanf("%d",&num);
/*  printf("enter the character\n");
  scanf("%c",&ch);
*/
 int i=1;
  while(i<=num)
  {
   printf("*");
  i++;
}

}
