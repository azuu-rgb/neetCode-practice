class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r = 1;
        int l = 0;
        int buy;
        int sell;  
        int max = 0;
        int aux;
        
        if(prices.size() < 2) {  
            return 0;
        }
        
        while(r < prices.size() && l < r) {  
            buy = prices[l];
            sell = prices[r];  
            
            if(buy > sell) {
                l = r;
                if(r < prices.size()-1){
                    r++;
                    buy = prices[l];
                    sell = prices[r];  
                    aux = sell - buy;
                    if(aux > max) {
                        max = aux;
                    }
                }
                
                
            } else {
                aux = sell - buy;
                if(aux > max) {
                    max = aux;
                }
                r++;
               
            }
        }
        return max;
    }
};
