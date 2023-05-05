#include<iostream>
using namespace std;
void say(string arr[], int n)
{
    if(n==0)
    {
        return;
    }
    int dig=n%10;
    int num=n/10;
    cout<<arr[dig]<<"   ";
    say(arr,num);
}
int main()
{
    cout<<"enter the number";
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    say(arr,n);


}