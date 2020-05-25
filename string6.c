#include<stdio.h>
#include<string.h>
void main()
{
  char str[20],rev[20];
  int i,j=0,n;
  printf("Enter the string:");
  gets(str);
  n=strlen(str);
  for(i=n-1;i>=0;i--)
  {
    str[i]=rev[j];
    j++;
  }
  printf("Reversed string is");
  puts(rev);
}
 
