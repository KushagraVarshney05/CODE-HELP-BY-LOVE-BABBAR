#include<iostream>
using namespace std;
int sum_array(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    cout<<arr[0]<<endl;

    return sum_array(arr+1,size-1)+arr[0];
}
int main()
{
    int arr[]={1,2,3,4};
    int sum=sum_array(arr,4);
    cout<<sum;
    return 0;
}
