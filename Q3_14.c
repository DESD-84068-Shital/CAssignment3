/*
 14. Write a program to accept a number and check whether it is Prime no.
*/


#include<stdio.h>
int main()
{
  int num;
  int flag=0;
  printf("Enter the number:\n");
  scanf("%d",&num);
  int i=2;
  for(;i<=num/2;i++)
  {
   if(num%i==0)
    {
      flag=1;
	  break;
	}
  }

  if(flag==0)
  {
   printf("prime no:%d ",num);
  }

  else
  {
   printf("not prime:%d ",num);
  }

}
