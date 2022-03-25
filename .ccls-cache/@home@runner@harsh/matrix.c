#include <stdio.h>
int main()
{
  int A[10][10],B[10][10],C[10][10],p,q,m,n,i,j;
  printf("Enter the order of matrix A(p*q)");
  scanf("%d%d",&p,&q);
  printf("Enter the order of matrix B(m*n)");
  scanf("%d%d",&m,&n);
  if (q!=m)
  {
    printf("matrix multiplication not possible");
    return 1;
  }
    //input for matrix A//
  printf("Enter matrix A");
  for (i=0;i<p;i++)
  {
   for (j=0;j<q;j++) 
   {
    scanf("%d",&A[i][j]);
   }
  }
  printf("Matrix A :\n");

  //print value of matrix A//
  for (i=0;i<p;i++)
  {
    for (j=0;j<q;j++) 
    {
      printf("%d\t",A[i][j]);
    }
    printf("\n");
  }
   //input for matrix B//
  printf("Enter matrix B");
  for (i=0;i<m;i++)
  {
   for (j=0;j<n;j++) 
   {
    scanf("%d",&B[i][j]);
   }
  }
  printf("Matrix B :\n");

  //print value of matrix A//
  for (i=0;i<m;i++)
  {
    for (j=0;j<n;j++) 
    {
      printf("%d\t",B[i][j]);
    }
    printf("\n");
  }

  //Multiplication of matrix "A" 
  return 0;
    }