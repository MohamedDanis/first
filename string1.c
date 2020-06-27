#include<stdio.h>
#include<string.h>
void main()
{
	char hello[]="Hello world";
	int len=strlen(hello);
	int size=sizeof(hello);
	printf("value=%d",len*size);

}

