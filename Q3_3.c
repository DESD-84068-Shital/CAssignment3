/*
3.Write a program to accept a number and
  a. Calculate sum of digits of integer
      Input: 9362
      Output: 9 + 3 + 6 + 2 = 20
*/

#include<stdio.h>
int main()
{
  int num;
  int rem=1,rev=0,sum=0;
  printf("Enter the number:\n");
  scanf("%d",&num);

  while(num!=0)
  {
    rem=num%10;
	printf("%d ",rem);
	sum+=rem;
	num=num/10;
  }
  printf("\n");
  printf("sum=%d\n",sum);


printf("----------------------------------------------------------\n");

/*
  b. Reverse the number
      Input: 9362
      Output: 2639
*/

int num1;
printf("Enter the number:\n");
scanf("%d",&num1);
printf("number in reverse order: ");
  while(num1!=0)
  {
    rem=num1%10;
	printf("%d",rem);
	rev=rev*10+rem;
	num1=num1/10;
  }
  printf("reverse=%d",rem);

printf("\n-----------------------------------------------------------\n");

/*
  c. Check whether given number is numeric palindrome or not
      Input: 9362
      Output: 9362 is not a numeric palindrome
      Input: 36963
      Output: 36963 is a numeric palindrome
*/

  int num2;
  int remdr=1,revrs=0;
  printf("Enter new number: ");
  scanf("%d",&num2);
  int temp=num2;
  printf("the given number is:%d\n",num2);

     while(num2!=0)
       {
        remdr=num2%10;
        revrs=revrs*10+remdr;
        num2=num2/10;
       }

   if(temp==revrs)
    printf("%d is a palindrome number\n",num2);

   else
   printf("%d is not a palindrome\n",num2);













}
