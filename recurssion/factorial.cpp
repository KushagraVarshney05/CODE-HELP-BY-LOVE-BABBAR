#include<iostream>
using namespace std;
int factorial(int n)
{
    int n=4;
    int x=2;
    if(n==0||n==1)
    {
        return 1;

    }
    return n*factorial(n-1);
}
int main()
{
    int x=4;
    cout<<"factorial is"<<factorial(5);
    return 0;
}