#include<iostream>
using namespace std;
bool sorted(int arr[],int size)
{
    if(size==0||size==1)
    {
        return 1;
    }
    if(arr[0]>arr[1])
    {
        return 0;
    }
    return sorted(arr+1,size-1);
}
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,11,10};
    bool ans=sorted(arr,11);
    if(ans)
    cout<<"array is sorted";
    else
    cout<<"array is not sorted";
}