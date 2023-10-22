class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    int arr[26]={0}; int ans=words.size();
        for(auto it:allowed)
        {
            arr[it-'a']++;
        }
     for(string word:words)
     {
         for(char c:word)
         {
             if(arr[c-'a']==0)
             {
                 ans--;
                 break;
             }
         }
     }
       return ans;
    }
};