class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>m;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            m.push_back({heights[i],names[i]});
        }
        sort(m.rbegin(),m.rend());
        vector<string>ans;
       
        for(int i=0;i<n;i++)
        {
            ans.push_back(m[i].second);
        }
        return ans;

    }
};