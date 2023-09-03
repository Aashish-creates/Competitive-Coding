class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int value1=str1.size();
        int value2=str2.size();
        if(value2>value1)
        {
            swap(value1,value2);
        }
        while(value2!=0)
        {
            int remainder=value1%value2;
            value1=value2;
            value2=remainder;
        }
        string ans="";
        if(str1+str2!=str2+str1)
        return ans;
     for(int i=0;i<value1;i++)
     {
         ans+=str1[i];
     }
        return ans;
    }
};