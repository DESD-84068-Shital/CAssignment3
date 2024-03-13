/*
 17. Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<stdio.h>
int main()
{
  int i,j,num;
 printf("enter the number:\n");
 scanf("%d",&num);
 printf("pattern--->\n");

 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  {
  printf("*");
  }
   printf("\n");
 }
  


}
