class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>abc;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            abc[nums[i]]++;
        }
        for(auto it:abc)
        {
            if(it.second==1)
            {
              sum+=it.first;
            }
        }
        return sum;
    }
};