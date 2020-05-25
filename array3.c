#include<stdio.h>
void main()
{
int a[20]={11,2,4,3,5,6,7,8,9,10},i,small;
small=a[0];
for(i=0;i<=9;i++)
{
	if(small>a[i])
		small=a[i];
    break;
}
printf("Small=%d",i);
}
