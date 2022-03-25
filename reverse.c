#include<stdio.h>
int main()
{
  int n,rem,rev=0;
  printf("Enter the number n\n");
  scanf("%d",&n);
  while(n!=0)
    {
      rem=n%10;
      n=n/10;
      rev=rev*10+rem;
      }
  printf("Reversed number is %d\n",rev);
  {
    if(rev==n)
  
    printf("The number is pealindrom");
    }
  return 0;
}