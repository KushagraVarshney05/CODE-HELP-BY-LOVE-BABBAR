#include <bits/stdc++.h> 
bool valid(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
        return true;
    }
    return false;
}
char tolowercase(char c)
{
 if(c>='A'&&c<='Z')  
 {
     c-='A';
     c+='a';
 } 
 return c;
}
bool checkPalindrome(string s)
{
    int n=s.length();
    int j=0;
    int k=0;
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        if(!valid(s[start]))
        {
            start++;
            continue;
        }
        if(!valid(s[end]))
        {
            end--;
            continue;
        }
        if(tolowercase(s[start])!=tolowercase(s[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
}