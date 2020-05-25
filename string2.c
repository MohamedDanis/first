#include<stdio.h>
#include<string.h>
void main()
{
	char name[100];
	printf("Enter the string:");
	gets(name);
	printf("length=%d",strlen(name));
}