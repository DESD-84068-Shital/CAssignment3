//check whether the entered number is armstrong or not

#include<stdio.h>
#include<math.h>
int main()
{
  int num,sum=0,rem=1,rev=0;
  int temp=num;

  printf("enter the number:\n");
  scanf("%d",&num);

  while(num!=0)
  {
  rem=num%10;
  sum+=pow(rem,3);
  rev=rev*10+rem;
  num=num/10;
}
if(temp==rev)
printf("armstrong number\n");
else
{
  printf("not armstrong number");
}
}
