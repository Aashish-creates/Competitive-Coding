class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s+s;
        int l1=s.size();
        int l2=goal.size();
        if(l1!=l2)
        return false;

        else{
        if(temp.find(goal)==string::npos)
        return false;
        }
        return true;
    }
};