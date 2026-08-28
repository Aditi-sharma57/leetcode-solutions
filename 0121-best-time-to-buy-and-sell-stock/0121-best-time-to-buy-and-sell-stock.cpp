class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
       
        int profit =0;
        for(int i =0; i<prices.size(); i++){
            if(prices[i]<min){
                min=prices[i];
              
            }
             if(prices[i]-min>profit){
            profit=prices[i]-min;
        }
        }
        //if(minindex==prices.size()-1){
          //  return 0;
        //}
        //int max = prices[minindex+1];
        // for(int i = minindex+2; i<prices.size(); i++){
        //     if(prices[i]>max){
        //         max=prices[i];
        //     }
        // }
       

        
        return profit;
    }
};