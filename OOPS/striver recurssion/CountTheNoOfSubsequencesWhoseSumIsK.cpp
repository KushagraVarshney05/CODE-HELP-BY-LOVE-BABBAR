#include<iostream>
#include<vector>
using namespace std;
int count=0;
void printarr(vector<int> &arr2)
{
    for(auto it:arr2)
    cout<<it;
    cout<<endl;
}
void subsequence(int ind,vector<int> &arr,vector<int>&arr2,int sum,int k)
{
    if(ind>=arr.size())
    {
        if(sum==k)
        {
            count++;
            printarr(arr2);
        }
        return;
    }
    arr2.push_back(arr[ind]);
    sum+=arr[ind];
    subsequence(ind+1,arr,arr2,sum,k);
    arr2.pop_back();
    sum-=arr[ind];
    subsequence(ind+1,arr,arr2,sum,k);
   

}
int main()
{
    cout<<"enter the values of array and press 0 for exit";
    vector<int> arr;
    int temp;
    do{
        cin>>temp;
        if(temp)
        arr.push_back(temp);
    }while(temp);
    cout<<"enter the value of k";
    int k;
    cin>>k;
    vector<int>arr2;
    subsequence(0,arr,arr2,0,k);
    cout<<count;
}