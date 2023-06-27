#include<iostream>
#include<vector>
using namespace std;
int pivot(int start,int end,vector<int> &arr)
{
    int i=start;
    int j=end;
    int pivot=arr[start];
    while(i<j)
    {
        while(arr[i]<=pivot&&i<=end)
        {
            i++;
        }
        while(arr[j]>pivot && j>=start)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}
void quick(int start,int end,vector<int> &arr)
{
    if(start>=end)
    {
        return;
    }
    int p=pivot(start,end,arr);
    quick(start,p-1,arr);
    quick(p+1,end,arr);
}
int main()
{
    vector<int> arr{2,5,3,4,2,6,9,8,5,898,5,356,3316,5};
    quick(0,13,arr);
    for(auto i:arr)
    {
        cout<<i;
        cout<<endl;
    }
    return 0;
}