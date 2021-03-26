#include<iostream> 
using namespace std;
void square_root(int x);
int main()
{
/* 'a' is a variable which stores the positive integer, whose square root we are finding. */ 
    int a;
    cout<<"Enter any positive integer : ";
    cin>>a;
    /* calling the square_root() function */
    square_root(a);
    return 0;
}
void square_root(int x)
{
    int r;
    /* 'i' is variable of iteration. */
    /* 'r' is a variable which stores the square root of given value. */
    for(int i=0;i<=x/2;i++)
    {
        if(i*i==x)
        {
            r=i;
            cout<<"The square root of "<<x<<" is "<<r<<".";
        }
    }
}
