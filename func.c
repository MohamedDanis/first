#include<stdio.h>
void multiplication(int,int);
void main()
{
  int s=25;
  printf("%d \n",s);
  multiplication(3,5);

}
void multiplication(int a,int b)
{
  int product;
  product=a*b;
  printf("%d",product);
}
