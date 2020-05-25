#include<stdio.h>
void main()
{
  int a[100],n,i;
  float sum=0;
  printf("Enter the amount of elements:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  printf("Mean of array = %f",sum/n);
}
