class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=t.size();
        int a=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]==t[i])
            {
                a++;
            }
           else if(s[i]!=t[i])
           {
               break;
           }
        }
        return t[a];
    }
}