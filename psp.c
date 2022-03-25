#include<stdio.h>
int main()
{
  int n,i,a[20],j,temp;
  printf("Enter the number of elements");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter %d th term",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
 }
  printf("the sorted array is");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
  
}
