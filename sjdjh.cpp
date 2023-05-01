#include<iostream>
#include<vector>
using namespace std;
int main()
{
    bool flag=true;
    vector<int> arr{-13,-11,1,2,5,9};
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<endl;
        }
    }
    flag=!flag;
    cout<<flag;

}