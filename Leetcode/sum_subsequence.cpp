class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        vector<int>ans;
        int sum2=0;
        for(int i=0;i<=n;i++)
        {
            sum2+=nums[i];
            sum=sum-nums[i];
            ans.push_back(nums[i]);
            if(sum<sum2)
            break;
        }
        return ans;
    }
};