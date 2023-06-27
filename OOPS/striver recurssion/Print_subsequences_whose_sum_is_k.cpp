#include<iostream>
#include<vector>
using namespace std;
void PrintArray(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
int sum_vector(vector<int> arr2)
{
    int sum=0;
    for(int i=0;i<arr2.size();i++)
    {
        sum=sum+arr2[i];
    }
    return sum;
}
void subsequences(int ind,vector<int>arr,vector<int> arr2)
{
    if(ind>=arr.size())
    {
        int sum=sum_vector(arr2);
        if(sum==8)
        {
            PrintArray(arr2);
            
        }
        return;
    }
    arr2.push_back(arr[ind]);
    subsequences(ind+1,arr,arr2);
    arr2.pop_back();
    subsequences(ind+1,arr,arr2);
    return;
}
int main()
{   
    vector <int> arr;
    cout<<"enter the array and size";
    int temp;
    do
    {
        cin>>temp;
        if(temp)
        arr.push_back(temp);
    }while(temp);
    vector<int>arr2;
    subsequences(0,arr,arr2);
    return 0;

}