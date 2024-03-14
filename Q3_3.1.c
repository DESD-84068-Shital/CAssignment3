//check whether the entered number is armstrong or not

#include<stdio.h>
#include<math.h>
int main()
{
  int num,sum=0,rem=1;

  printf("enter the number:\n");
  scanf("%d",&num);

  int temp=num;
  while(num!=0)
  {
  rem=num%10;
  sum += rem*rem*rem;
  //rev = rev*10+rem;
  num=num/10;
	}
if(temp == sum)
printf("armstrong number\n");
else
{
  printf("not armstrong number");
}
}
