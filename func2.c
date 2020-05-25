#include<stdio.h>
int sum(int,int);
int mul(int,int);
void main()
{
   int su,pro,x,y,z;
   printf("Enter three numbers:");
   scanf("%d%d%d",&x,&y,&z);
   su=sum(x,y);
   pro=mul(su,z);
   printf("%d",pro);
}
int sum(int a,int b)
{
  int s;
  s=a+b;
   return s;
}
int mul(int a,int b)
{
  return(a*b);
}
