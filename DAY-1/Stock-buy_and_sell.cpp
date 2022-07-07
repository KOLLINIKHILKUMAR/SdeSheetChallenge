class Solution {
public:
    int maxProfit(vector<int>& prices) //if minimum at end return 0
    {
        int i,min=prices[0],pro=0;
        for(i=1;i<prices.size();i++)        //i=1 to n and minimum=prices[0] and profit=0
        {                                                
            if(min>prices[i]) min=prices[i];        // if minimum>prices[i] then minimum=prices[i]
            if(prices[i]-min>pro) pro=prices[i]-min;        //if profit is lesser than prices difference with minimum then make profit is equal to prices[i]-minimum and return profit
        }
        return pro; 
    }
};
