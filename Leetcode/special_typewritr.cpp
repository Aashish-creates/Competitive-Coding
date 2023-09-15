class Solution {
public:
    int minTimeToType(string word) {
        int prev='a';
        int ans=0;
        for(auto& v:word)
        {
            int diff=abs(prev-v);
           ans+=min(diff,26-diff);
           prev=v;
        }
        int n=word.size();
        return ans+n;
    }
};