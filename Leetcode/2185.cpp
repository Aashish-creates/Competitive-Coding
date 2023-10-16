class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto s:words)
        {
            auto kk=s.find(pref);
            if(kk!=string ::npos&&kk==0)
            ans++;

        }
        return ans;
    }
};