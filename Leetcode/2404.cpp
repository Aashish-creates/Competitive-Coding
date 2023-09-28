class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans=-1;
        int max=-1;
        for(auto it:mp)
        {
            if((it.first)%2==0 && it.second>max)
            {
                max=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};