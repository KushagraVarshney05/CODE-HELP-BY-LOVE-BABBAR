    
bool ispossible(vector<int>nums,int n,int m,int mid)
{
    int sum=0;
    int max_sum=mid;
    int student=1;
    for(int i=0;i<n;i++)
    {
        if(sum+nums[i]<=max_sum)
        {
            sum+=nums[i];
        }
        else{
            student++;
            if(student>m||nums[i]>max_sum)
            {
                return false;
            }
            sum=nums[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &arr, int m)
{
    int n=arr.size();
    int sum=accumulate(arr.begin(),arr.end(),0);
    int start=sum/m;
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
