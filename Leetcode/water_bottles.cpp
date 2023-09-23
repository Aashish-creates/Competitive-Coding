class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
     int ans=numBottles;
     int abc=0;
     do{
         ans+=numBottles/numExchange;
         abc=numBottles%numExchange;
         numBottles=numBottles/numExchange+abc;
     }while(numBottles>=numExchange);
     return ans;
    }
};