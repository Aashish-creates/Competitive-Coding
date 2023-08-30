class Solution {
public:
    bool isPalindrome(int x) {
        string str1=to_string(x);

       int l=str1.size()-1;
        int i=0;
        int flag=0;
        for(int i=0;i<l;i++){
        if(string[i]==string[l])
        {
            flag=1;
        return true;
        }
        l--;
        }
        if(flag==0)
        {
            return false;
        }
    }
};