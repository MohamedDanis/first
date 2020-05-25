#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int result;
	printf("Enter two strings");
	gets(str1);
	gets(str2);
	result=strcmp(str1,str2);
	if(result==0)
		printf("Strings are equal");
	else
			printf("Strings are not equal");
}
