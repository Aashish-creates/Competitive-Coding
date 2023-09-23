class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sumleft=0;
        int sumright=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<n;i++)
        {
            sumright-=nums[i];
            if(sumleft==sumright)
            return i;
            sumleft+=nums[i];
        }
        return -1;
    }
};