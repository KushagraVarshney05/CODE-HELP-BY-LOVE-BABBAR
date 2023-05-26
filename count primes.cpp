class Solution {
public:
    int countPrimes(int n) {
        vector<bool> arr(n+1, true);
       int count =0;
        arr[0]=arr[1]=false;
        for(int i=2;i<n;i++)
        {
            if(arr[i])
            {
                count++;
                for(int j=i;j<n;j=j+i)
                {
                    arr[j]=false;
                }
            }
        }
        return count;
    }
};