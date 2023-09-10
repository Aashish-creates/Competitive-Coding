class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>abc;
        for(int i=0;i<nums.size();i++)
        {
            abc.insert(nums[i]);
        }

        int i=0;
        for(auto it:abc)
        nums[i++]=it;

      return abc.size();
    }
}