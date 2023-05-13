#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"kush"<<endl;
    vector<int> ans{1,2,3};
    int temp=0;
    int n=ans.size();
    for(int i=0;i<n;i++)
    {
        temp=(temp*10)+(ans[i]);
    }
     vector<int> fact(5+1,1);
        for(int i = 2; i <= 5; i++){
            fact[i] = fact[i-1]*i;
            cout<<fact[i]<<endl;
        }
    
    return 0;
}