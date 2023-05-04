#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    int sizes[]={4,2,3};
    for (int i = 0; i < n; i++)
    {
        int temp=sizes[i];
        arr[i] = new int[temp];
    }
    for (int i = 0; i < n; i++)
    {
         int temp=sizes[i];
        for (int j = 0; j < temp; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
         int temp=sizes[i];
        for (int j = 0; j < temp; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
