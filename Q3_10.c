/*
 10. Write a program to print table of given number.
*/

#include<stdio.h>
#include<math.h>
int main()
{
  int num,i;
  printf("Enter the number:\n");
  scanf("%d",&num);

  printf("table of given number:\n");
  for(i=1;i<=10;i++)
   {
    printf("%d*%d=%d\n",num,i,(num*i));

   }

  return 0;
}
