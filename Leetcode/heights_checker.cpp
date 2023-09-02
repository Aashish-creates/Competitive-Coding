class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ans;
        int n=heights.size();
        ans=heights;
        sort(ans.begin(),ans.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=ans[i])
            count++;
        }
        return count;
    }
};