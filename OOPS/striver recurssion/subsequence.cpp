#include <iostream>
#include<vector>
using namespace std;
int arr[]={3,1,2};
int n=3;
void printarray(int m,vector<int> &arr2)
{
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i];
    }
    cout<<endl;
}
void print_subsequence(int ind,vector<int> &arr2)
{
    if(ind>=n)
    {
        printarray(arr2.size(),arr2);
        return;
    }
    
    print_subsequence(ind+1,arr2);
    arr2.push_back(arr[ind]);
    print_subsequence(ind+1,arr2);


}
int main()
{
vector<int> arr2;
print_subsequence(0,arr2);
}
