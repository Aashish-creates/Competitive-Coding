class Solution {
public:
    int similarPairs(vector<string>& words) {
     
      map<string,int>mm;
      int count=0;
      for(auto word:words)
      {
           set<char>st;
          for(auto c:word)
          {
              st.insert(c);
          }
          string s;
          for(auto x:st)
            s+=x;

            mm[s]++;
      }

      for(auto kk:mm)
      {
      int res=(kk.second-1)*(kk.second)/2;
       count+=res;
      } 
      return count;
    
    }
};
