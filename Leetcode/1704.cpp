class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        vector<string>abc;
        int count=0;
          transform(s.begin(), s.end(), s.begin(), ::toupper);
        for(int i=0;i<n/2;i++)
        {
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
count++;
        }
        int count2=0;
         for(int i=n/2;i<n;i++)
        {
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
count2++;
        }
        if(count2==count)
        return true;
        return false;

    }
};