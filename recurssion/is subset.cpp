class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int i=0;
        int j=0;
        if(n==0)
        {
            return 1;
        }
        bool flag=0;
        while(i<n&&j<m)
        {
            char temp=s[i];
            while(j<m)
            {
                if(temp==t[j])
                {
                    if(i==n-1)
                    {
                        flag=1;
                    }
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }

        return flag;
    }
};