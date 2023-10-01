class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="";
        string b="";
        for(int i=0;i<word1.size();i++)
        {
            a+=word1[i];
        }
         for(int i=0;i<word2.size();i++)
        {
            b+=word2[i];
        }
        if(a.size()!=b.size())
        return false;
        for(int i=0;i<a.size() and i<b.size();i++)
        {
            if(a[i]!=b[i])
            return false;
        }
        return true;
       
    }
};