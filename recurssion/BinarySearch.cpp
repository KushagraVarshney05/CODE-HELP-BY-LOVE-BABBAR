#include<iostream>
using namespace std;
bool search(int arr[],int start,int end,int key)
{
    if(start>end)
    return false;
    int mid=(start+end)/2;
    if(arr[mid]==key)
    return true;
    else if(arr[mid]<key)
    start=mid+1;
    else
    end=mid-1;
    // cout<<arr[mid];
    return search(arr,start,end,key);
    
    
}
int main()
{
    int arr[]={1,2,3,4,6,8,9};
    int key=5;
    bool ans=search(arr,0,6,key);
    if(ans)
    cout<<"element is present";
    else
    cout<<"element is not present";
}