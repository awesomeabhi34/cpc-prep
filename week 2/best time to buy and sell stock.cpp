  int maxProfit(vector<int>& prices) {
        int len= prices.size();
        int arr[len];
        arr[len-1] = prices[len-1];
        for(int i=len-2;i>=0;i--){
            arr[i] = (prices[i]>arr[i+1])?prices[i]:arr[i+1];
        }
        
        int max=0;
        
        for(int i=0;i<len-1;i++){
            max= ((arr[i]-prices[i])>max)?(arr[i]-prices[i]):max;
        }
        return max;
    }
