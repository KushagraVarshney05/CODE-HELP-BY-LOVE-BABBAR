class Solution {
public:
    bool valid(char c)
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
        return true;
        else 
        return false;
    }
    char tolowercase(char c)
    {
        if(c>='A'&&c<='Z')
        {
            c=c-'A';
            c=c+'a';
        }
        return c;
    }
    bool isPalindrome(string s) {
       string ans="";
       for(int i=0;i<s.length();i++)
       {
           if(valid(s[i]))
           {
               ans.push_back(s[i]);
           }
       }
       cout<<ans;
       int start=0;
       int end=ans.length()-1;
       while(start<=end)
       {
           if(tolowercase(ans[start])!=tolowercase(ans[end]))
           {
               return false;
           }
           else{
               start++;
               end--;
           }
       }
        return true;
        
    }
};