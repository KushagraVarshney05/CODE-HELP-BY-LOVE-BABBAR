#include<iostream>
#include<vector>
using namespace std;
void merge(int start,int end,vector<int> &arr)
{
    int mid=(start+end)/2;
    vector<int> temp;
    int i=start;
    int j=mid+1;
    while(i<=mid&&j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i++]);

        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
    }
    int k=start;
    // for(auto it:temp)
    // {
    //     arr[k++]=it;
    // }
    for(int it=start;it<=end;it++)
    {
        arr[it]=temp[it-start];
    }
    return;
}
void merge_sort(int start,int end,vector<int> &arr)
{
    if(start>=end)
    {
        return;
    }
    int mid=(start +end)/2;
    merge_sort(start,mid,arr);
    merge_sort(mid+1,end,arr);
    merge(start,end,arr);


}
int main()
{
    vector<int> arr {1,2,3,4,5,6,9,7,8,9};
    merge_sort(0,9,arr);
    for(auto i:arr)
    {
        cout<<i;
    }
    return 0;
}

