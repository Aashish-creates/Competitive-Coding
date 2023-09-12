class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int max=-1111;
    int maxindex;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>max)
        {
        max=nums[i];
        maxindex=i;
        }
    }
    sort(nums.begin(),nums.end());
    int n=nums.size();
    if(nums[n-2]*2>max)
    return -1;
    return maxindex;

    }
};