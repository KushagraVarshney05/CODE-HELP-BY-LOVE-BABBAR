#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b&1)
    {
        return power(a,b/2)*power(a,b/2)*a;
    }
    else
    {
       return power(a,b/2)*power(a,b/2); 
    }
}
int main()
{
    int a,b;
    a=5;
    b=3;
    cout<<power(a,b);
    return 0;
}