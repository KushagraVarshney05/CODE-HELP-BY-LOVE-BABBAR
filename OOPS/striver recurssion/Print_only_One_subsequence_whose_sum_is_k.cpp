#include<iostream>
#include<vector>
using namespace std;
void printarr(vector<int> &arr2)
{
    for(auto it:arr2)
    cout<<it;
    cout<<endl;
}
bool subsequence(int ind,vector<int> &arr,vector<int>&arr2,int sum,int k)
{
    if(ind>=arr.size())
    {
        if(sum==k)
        {
            printarr(arr2);
            return true;
        }
        return false;
    }
    arr2.push_back(arr[ind]);
    sum+=arr[ind];
    if(subsequence(ind+1,arr,arr2,sum,k)==true)
    {
        return true;
    }
    arr2.pop_back();
    sum-=arr[ind];
     if(subsequence(ind+1,arr,arr2,sum,k)==true)
    {
        return true;
    }
    return false;

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
}