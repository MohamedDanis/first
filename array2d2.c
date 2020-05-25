#include<stdio.h>
void main()
{
  int A[3][3],B[3][3],sum[3][3],i,j,r,c;
  printf("Enter  the row and column size of matrix:");
  scanf("%d %d",&r,&c);
  printf("Enter the elements of 1st matrix:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&A[i][j]);
    }
  }
  printf("Enter the elements of 2nd matrix:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&B[i][j]);
    }
  }
  printf("Sum of the matrices :\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      sum[i][j]=A[i][j]+B[i][j];
      printf("%d ",sum[i][j]);

    }
    printf("\n");
  }
  /*printf("Sum of the matrices \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",sum[i][j]);
    }
    printf("\n");
  }*/
}
