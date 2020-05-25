#include<stdio.h>
#include<string.c>
void main()
{
	char hello[]="Hello world";
	int len=strlen(hello);
	int size=sizeof(hello);
	printf("value=%d",len*size);

}
//Error is detected
