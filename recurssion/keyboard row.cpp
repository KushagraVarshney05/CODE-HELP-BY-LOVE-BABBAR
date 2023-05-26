class Solution {
public:
  vector<string> findWords(vector<string>& w) {
        int i,j,c1=0,c2=0,c3=0;
        
        for(j=0;j<w.size();j++)
        {
            c1=0,c2=0,c3=0;
            string s=w[j];
            for(i=0;i<s.length();i++)
            {
                if(s[i]=='A' ||s[i]=='a' ||s[i]=='S' ||s[i]=='s' ||s[i]=='D' ||s[i]=='d' ||s[i]=='F' ||s[i]=='f' ||s[i]=='G' ||s[i]=='g' ||s[i]=='H' ||s[i]=='h' ||s[i]=='J' ||s[i]=='j' ||s[i]=='K' ||s[i]=='k' ||s[i]=='L' ||s[i]=='l')
                {
                    c2++;
                }
                else if(s[i]=='Z' ||s[i]=='z' ||s[i]=='X' ||s[i]=='x' ||s[i]=='C' ||s[i]=='c' ||s[i]=='V' ||s[i]=='v' ||s[i]=='B' ||s[i]=='b' ||s[i]=='N' ||s[i]=='n' ||s[i]=='M' ||s[i]=='m')
                {
                    c3++;
                }
                else
                {
                    c1++;
                }
            }
            if(c1!=w[j].length() && c2!=w[j].length() && c3!=w[j].length())
            {
                w.erase(w.begin()+j);
                j--;
            }
        }
        return w;
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> keyToRowMp;
        vector<string> keyboardRows = 
            {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < keyboardRows.size(); i++) {
            for (auto &ch : keyboardRows[i]) {
                keyToRowMp.insert(make_pair(ch, i));
                keyToRowMp.insert(make_pair(ch - 'a' + 'A', i));
            }
        }
        
        vector<string> oneRowWords;
        for (auto &word : words) {
            bool oneRowWord = true;
            for (int i = 1; i < word.size(); i++) {
                if (keyToRowMp[word[i - 1]] != keyToRowMp[word[i]]) {
                    oneRowWord = false;
                    break;
                }
            }
            if (oneRowWord)
                oneRowWords.push_back(word);
        }
        return oneRowWords;
    }
};