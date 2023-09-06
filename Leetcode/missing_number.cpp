class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int aa=0;
        int a=0;
        for(int i=0;i<n;i++)
        {
         sum+=nums[i];
        }
          aa=n*(n+1)/2;
          a=aa-sum;
          return a;
    }
};