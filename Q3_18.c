/*
 18. Write a program to print the tables of the numbers from 1 to 10.
 */


#include<stdio.h>
int main()
{

   static num=1;
   int i;
   printf("Table from 1 to 10:\n");
   while(num<11)
    {
     for(i=1;i<=10;i++)
      {
        printf("%d*%d=%d \n",num,i,(num*i));
      }
   
     num++;
    }

}
