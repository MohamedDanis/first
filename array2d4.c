#include<stdio.h>
void main()
{
  int a[3][3],i,j;
  printf("Enter the elements of the matrix:");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("The transpose of matrix is : \n");
  for(j=0;j<3;j++)
  {
    for(i=0;i<3;i++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
