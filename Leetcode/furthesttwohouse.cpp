class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int l=0;
        int r=n-1;
        while(colors[l]==colors[n-1])
        l++;
        while(colors[r]==colors[0])
        r--;
        return max(n-l-1,r);
    }
};