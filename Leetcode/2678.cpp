class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        string a="";
        string c="";
        int b=0;
       for(int i=0;i<details.size();i++)
       {
            a=details[i][11];
            b=stoi(a)*10;
            c=details[i][12];
            b+=stoi(c);
               if(b>60)
               count++;
       }
       return count;
    }
};