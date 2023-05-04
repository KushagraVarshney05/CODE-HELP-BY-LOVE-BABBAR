#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    return 2*power(n-1);
}
int main()
{
    int n;
    cin>>n;

    cout<<"the power of 2 raise to "<<n<<" is "<<power(n);
}