#include<stdio.h>
void main()
{
  int input,i,sum=0;
  printf("entre any num:");
  scanf("%d", &input);
  for(i = 1;i<= input;i++)
  sum = sum +i;
  printf("sum of %d natural numbers :%d\n",input,sum);

}