class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int left_ptr=0;
        int right_ptr=1;
        int profit=0;

        while(right_ptr<prices.size()){

            if(prices[right_ptr]-prices[left_ptr]>0){
                profit=max(profit,prices[right_ptr]-prices[left_ptr]);
                



            }else{
                left_ptr=right_ptr;
            }

            right_ptr++;
        }

        return profit;




        
    }
};
