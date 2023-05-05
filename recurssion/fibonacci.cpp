#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    int ans=fibonacci(n-1)+fibonacci(n-2);
    
    return ans;
}
int main()
{
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    cout<<"fibonacci series"<<fibonacci(n);
    return 0;
}
// how to print whole series