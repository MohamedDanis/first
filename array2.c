#include<stdio.h>
void main()
{
int a[20],i,large,n;
printf("Enter the amount of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<=n;i++)
{
	if(large<a[i])
		large=a[i];
}
printf("Large=%d",large);
}
