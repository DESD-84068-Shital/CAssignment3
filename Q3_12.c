/*
 12. Write a program to accept integer values of base and index and calculate power of base to index.
Input: base:2 index:5
Output: 32
Input: base: 8 index:3
Output: 512
*/

#include<stdio.h>
int main()
{
  int base,index;
  int p=1;
  printf("Enter the base:\n");
  scanf("%d",&base);

  printf("Enter the index:\n");
  scanf("%d",&index);

     for(int i=1;i<=index;i++)
      {
        p*=base;
      }
        printf("%d\n",p);

}
