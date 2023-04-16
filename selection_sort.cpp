#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   int min;
    int swap;
    for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        swap=i;
        for(int j=i;j<n;j++)
        {
            if(min>arr[j])
            {   
                min=arr[j];
                swap=j;
            }
        }
        int temp=arr[swap];
        arr[swap]=arr[i];
        arr[i]=temp;
    }
    
}