class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>ans;
        vector<int>ant;
        int n=arr.size();
        int a=0;
        for(int i=0;i<arr.size();i++)
        {
            ans[arr[i]]++;
        }
        for(auto it: ans)
        {
            if(it.second>n/4)
            a=it.first;
        }
        return a;
    }
};