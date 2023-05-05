#include<iostream>
using namespace std;
int sum(int arr[],int size,int total);
int main()
{
    int arr[]={11};
    int total=0;
    int ans=sum(arr,1,total);
    cout<<ans<<endl;

}
int sum(int arr[],int size,int total)
{
    if(size==0)
    {
        return total;
    }
    return sum(arr+1,size-1,total+arr[0]);
}

