class Solution {
public:
    string removeTrailingZeros(string num) {
     int i=num.size()-1;
     while(i>=0&&num[i]=='0')  
     {
       i--;
     }
     string k="";
     k=num.substr(0,i+1) ;
     return k;
    }
};