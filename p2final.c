#include<stdio.h>
int input()
{
  int a;
  printf("entre value/n");
  scanf("%d",&a);
   return a;
}
int add (int a,int b)
{
  int c;
  c=a+b;
  return c;
 }
int output (int a,int b,int sum)
{
printf("Sum of %d and %d is %d",a,b,sum);
}
int main()
{
  int a,b,sum;
a=input();
b=input();
sum=add(a,b); 
output(a,b,sum);
return 0;
}