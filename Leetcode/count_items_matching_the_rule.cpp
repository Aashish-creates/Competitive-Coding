class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n= items.size();
        int count=0;
        int i;
        if(ruleKey=="type")i=0;
         if(ruleKey=="color")i=1;
          if(ruleKey=="name")i=2;
        for(int j=0;j<n;j++)
        {
           if(items[j][i]==ruleValue)
           count++;
        }
        return count;
    }
};