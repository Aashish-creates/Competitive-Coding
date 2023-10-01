class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string aa="";
        for(int i=0;i<s.size();i++)
        {
        
          if(s[i]==' ')
          count++;
          if(count==k)
          break;
           aa+=s[i];
         
        }
        return aa;

    }
};