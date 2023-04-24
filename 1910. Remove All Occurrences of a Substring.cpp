// 1910. Remove All Occurrences of a Substring
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int m=part.length();
        while(s.length()>=m){
        size_t found = s.find(part);
        if(found>=s.length())
        {
            return s;
        }
        if(found<s.length())
        {
            s.erase(found,m);
        }
    }
    return s;
    }
};