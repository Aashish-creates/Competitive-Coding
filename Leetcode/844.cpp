class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>a,b;
        string s1,s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#'&& !a.empty())
            {
                a.pop();
            }
            else if(s[i]!='#')
            a.push(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#'&& !b.empty())
            {
                b.pop();
            }
            else if(t[i]!='#')
            b.push(t[i]);
        }
        while(!a.empty())
        {
            s1.push_back(a.top());
            a.pop();
        }
       while(!b.empty())
        {
            s2.push_back(b.top());
            b.pop();
        }
        if(s1==s2)
        return true;
        return false;


    }
};