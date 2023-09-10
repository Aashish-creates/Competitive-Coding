class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int count=0;
        unordered_set<int>a;
          for(int i=0;i<nums1.size();i++)
          {
              a.insert(nums1[i]);
          }
       for(int i=0;i<nums2.size();i++)
       {
           int key=nums2[i];
           if(a.find(key)!=a.end())
           {
           ans.push_back(key);
           a.erase(key);
           }
       }
        return ans;
    }
};