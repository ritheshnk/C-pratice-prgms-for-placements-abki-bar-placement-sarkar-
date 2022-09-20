#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num,sum=0;
  printf("enter the last num till which u need sum:");
  scanf("%d",&num);
  for(int i=1;i<num;i++)
    {
      sum+=num;
    }
  printf("%d",sum);
}