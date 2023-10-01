class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size()!=s.size())
        return false;
        int c=0;
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(words[i][j]==s[i])
            c++;
        }
        if(c==s.size())
        return true;
        return false;;

    }
};