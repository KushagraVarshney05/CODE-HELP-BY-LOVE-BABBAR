#include<iostream>
using namespace std;
bool search(int arr[],int key,int size)
{
    if(size==0)
    return 0;
    if(arr[0]==key)
    return true;
        cout<<arr[0]<<endl;
    
    return search(arr+1,key,size-1);

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,6,5,62,34,6,25,35,596};
    bool ans= search(arr,8,17);
    if(ans)
    {
        cout<<"element is present";
    }
    else
    cout<<"element is not present";

}