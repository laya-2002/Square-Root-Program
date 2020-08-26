#include<stdio.h>
void square_root(int x);
int main()
{
/* 'a' is a variable which stores the positive integer, whose square root we are finding. */ 
    int a;
    printf("Enter any positive integer : ");
    scanf("%d",&a);
    /* calling the square_root() function */
    square_root(a);
    return 0;
}
void square_root(int x)
{
    int i,r;
    /* 'i' is variable of iteration. */
    /* 'r' is a variable which stores the square root of given value. */
    for(i=0;i<=x/2;i++)
    {
        if(i*i==x)
        {
            r=i;
            printf("The square root of %d is %d.",x,r);
        }
    }
}
