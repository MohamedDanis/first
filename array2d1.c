#include<stdio.h>
void main()
{
	int ary[3][3],i,j,sum=0;
	printf("Enter the elements of matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&ary[i][j]);
		}
	}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",ary[i][j]);
		sum=sum+ary[i][j];
	}
	printf("\n");
}
printf("sum=%d",sum);	
}