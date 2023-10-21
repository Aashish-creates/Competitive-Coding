class Solution {
public:
    bool judgeCircle(string moves) {
       int lc=0,rc=0,uc=0,dc=0;
       for(auto it:moves)
       {
           if(it=='L')
           lc++;
           else if(it=='R')
           rc++;
           else if(it=='U')
           uc++;
           else 
           dc++;
       } 
       if(lc==rc&&uc==dc)
       return true;
       return false;

    }
};