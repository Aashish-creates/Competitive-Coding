class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int n=s.size();
        int aa=0;
        for(auto rt:mp)
        {
            if(rt.first==letter)
            {
              aa=(rt.second*100)/n;
            }
        }
        return aa;
        
    }
};