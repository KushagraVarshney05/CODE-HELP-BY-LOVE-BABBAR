class Solution {
public:
void solve(vector<int> nums,vector<int> output,vector<vector<int>>& ans,int n,int index)
{
    if(index==n)
    {
        ans.push_back(output);
        return;
    }
    solve(nums,output,ans,n,index+1);
    int element =nums[index];
    output.push_back(element);
    solve(nums,output,ans,n,index+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int n=nums.size();
        solve(nums,output,ans,n,0);
        return ans;
    }
};