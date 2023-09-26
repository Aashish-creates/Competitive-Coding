class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>ab;
        for(int i=0;i<nums.size();i++)
        {
            ab[nums[i]]++;
        }
        int a=0;
        for(auto it:ab)
        {
            if(it.second==1)
            return it.first;
        }
        return -1;
    }
};