#include<stdio.h>
void sum(int,int);
void mul(int,int);
void div(int,int);
void main()
{
    int a,b,ch;
    do{
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        printf("\n 1:summation 2:multiplication 3:division \n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:sum(a,b);
                    break;
            case 2:mul(a,b);
                    break;
            case 3:div(a,b);
                    break;
            default :printf("invalid choice");                        
        }
    }while(ch<=3 && ch>=1);
}
    void sum(int a,int b)
    {
        printf("sum=%d",a+b);
    }
    void mul(int a,int b)
    {
        printf("product=%d",a*b);
    }
    void div(int a,int b)
    {
        printf("quotient=%d",a/b)
    }
}