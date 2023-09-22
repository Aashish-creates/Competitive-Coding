class Solution {
public:
    bool isSubsequence(string s, string t) {
      
      int n=s.size(),m=t.size();
      if(n==0)
      return true;
      int j=0,i=0;
      for( j=0; j<m;j++)  
      {
      if(s[i]==t[j])
      i++;
      if(i==n)
      return true;
      }
      return false;
    }
};