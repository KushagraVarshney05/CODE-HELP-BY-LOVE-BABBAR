#include<iostream>
using namespace std;
void reverse(string &s,int i)
{
    
    int n=s.length();
    if(i>=n/2)
    return;
    else
    swap(s[i],s[n-i-1]);
    i++;
    reverse(s,i);


}
int main()
{
    string s="kushagra";
    int i=0;
    reverse(s,i);
    cout<<s;
}