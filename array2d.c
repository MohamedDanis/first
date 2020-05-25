#include<stdio.h>
void main()
{
int ary[3][3]={1,2,3,4,5,6,7,8,9},i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",ary[i][j]);
	}
	printf("\n");
}
}
