class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int end=i+1;
            int start=n-i;
            int total=start*end;
            int odd=total/2;
            if(total%2==1)
            {
                odd++;
            }
            ans+=odd*arr[i];
        }
        return ans;
    }
};