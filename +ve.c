#include<stdio.h>
int main()
{
   int n;
  printf("enter a number\n");
  scanf("%d",&n);
  if(n>0)
  {
    printf(" the given number is positive \n");
  }
  else if(n<0)
  {
  	printf(" the given number is negative\n");
  }
  else if(n==0)
  {
  	printf("the no is zero\n");
  }
  
  return 0;
}