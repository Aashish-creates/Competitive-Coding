class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        if(n==1)
        return true;
        if(n==0)
        return false;
        while(n>0)
        {
            if(n%2==0)
            {
                n=n/2;
            }
           else if(n==1)
             {
                 return true;
             }
             else
              return false;

        }
        return false;

    }
};