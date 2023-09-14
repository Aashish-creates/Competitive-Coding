class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0;
        int d=s.size();
        vector<int>ans;
        for(int j=0;j<s.size()+1;j++)
        {
            if(s[j]=='D')
            {
                ans.push_back(d);
                d--;
                }
                else 
                {
                ans.push_back(i);
                i++;
                }

        }
        return ans;
    }
};