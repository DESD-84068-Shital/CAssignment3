/*
 19. Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
     within the range.
*/

#include<stdio.h>
int main()
{
  int i,max,min;
  printf("Enter the number from which we print the table:\n");
  scanf("%d",&min);
  printf("Enter the number upto which we print the table:\n");
  scanf("%d",&max);

  while(min<max)
   {
     for(i=1;i<=10;i++)
	  {

      printf("%d*%d=%d\n",min,i,(min*i));

	  }
	  min++;
   }

}
