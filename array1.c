#include<stdio.h>
void main()
{
	int a[20],i,n;
	printf("Enter the amount of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the numbers:");
		scanf("%d",&a[i]);
	}
	printf("Even numbers are :");
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
		printf("\n %d",a[i]);
	}
}