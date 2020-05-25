#include<stdio.h>
void main()
{
  int a[3][3],b[3][3],p[3][3],r,c,i,j,k;
  printf("Enter the rows and columns for the matrices:");
  scanf("%d %d",&r,&c);
  printf("Enter the elements of 1st matrix:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements of 2nd matrix:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      p[i][j]=0;
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      for(k=0;k<c;k++)
      {
        p[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  printf("The Output matrix is: \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",p[i][j]);
    }
    printf("\n");
  }
}
