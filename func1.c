#include<stdio.h>
void sum(int,int);

void main()
{ int m,b;
  printf("Enter two numbers:");
  scanf("%d%d",&m,&b);
  sum(m,b);
}
void sum(int a,int b)
{
  int s;
  s=a+b;
  printf("%d",s);
}
