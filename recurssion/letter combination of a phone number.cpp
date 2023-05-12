class Solution {
public:
    void solve(string digits,string map[],vector<string>&ans,int index,string output)
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int k=digits[index]-'0';
        string c=map[k];
        for(int i=0;i<c.length();i++)
        {
            output.push_back(c[i]);
            solve(digits,map,ans,index+1,output);
            output.pop_back();

        }
    }
    vector<string> letterCombinations(string digits) 
    {
        
        vector<string > ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string map[10]={"","","abc","def","ghi","jkl",
        "mno","pqrs","tuv","wxyz"};
        string output="";
        int index=0;
        solve(digits,map,ans,index,output);
        return ans;

    }
};
