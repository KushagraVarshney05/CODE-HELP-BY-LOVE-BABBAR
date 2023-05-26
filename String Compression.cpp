// 443. String Compression
class Solution {
public:
    int compress(vector<char>& chars) {
        int count=0;
        int i=0;
        char temp=chars[0];
        int ans=0;
        while(i<chars.size())
        {
            // cout<<i<<endl;
            if(chars[i]==temp)
            {
                count++;
                i++;
            }
            else
            {
                
                chars[ans]=temp;
                ans++;
               
                if(count>1)
                {
                    string c=to_string(count);
                    for(int j=0;j<c.length();j++)
                    {
                        chars[ans]=c[j];
                        ans++;
                    }
                }
                count=0;
                temp=chars[i];

            }
                
        }
                chars[ans]=chars[chars.size()-1];
                ans++;
                if(count>1)
                {
                    string c=to_string(count);
                    for(int j=0;j<c.length();j++)
                    {
                        chars[ans]=c[j];
                        ans++;
                    }
                }

        return ans;
    }
};