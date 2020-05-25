#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	char b[100]=" Awesome";
	printf("Enter a:");
	gets(a);
	strcat(a,b);
	strupr(a);
	puts(a);
	//printf("%s",a);
	//printf("\n length=%d",strlen(a));
}
