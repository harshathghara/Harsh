#include<stdio.h>
int main()
{
  int n,i,f=1,r,npr,ncr,nume,deno;
  printf("Enter the number n\n");
  scanf("%d",&n);
  printf("Enter the number r\n");
  scanf("%d",&r);
  for(i=1;i<=n;i++)
    {
      f=f*i;
    }
  printf("Factorial of %d is %d\n",n,f);
  nume=f;
  f=1;
  for(i=1;i<=(n-r);i++)
    {
      f=f*i;
    }
  printf("Factorial of %d is %d\n",(n-r),f);
  deno=f;
  npr= nume/deno;
  printf("The value of nPr is %d\n",npr);
  f=1;
  for(i=1;i<=r;i++)
    {
      f=f*i;
    }
  printf("Factorial of %d is %d\n",r,f);
  ncr= npr/f;
  printf("The value of nCr is %d\n",ncr);
  return 0;
}