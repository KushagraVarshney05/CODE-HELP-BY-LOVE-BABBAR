class Solution {
public:
bool ispossible(vector<int> arr,int mid,int days)
{
    int n=arr.size();
    int sum=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else
        {
            count++;
            if(count>days||arr[i]>mid)
            {
            return false;
            }
            sum=arr[i];
        }

    }
    return true;
}
    int shipWithinDays(vector<int>& arr, int days) {
        int end=accumulate(arr.begin(),arr.end(),0);
        int start=0;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end)
        {

            if(ispossible(arr,mid,days))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};