class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size(); // size of val   
        vector<pair<double, int>> ratio; // to store ratio and index of each item
        
        for (int i = 0 ; i < n; i++) {
            double r = (double) val[i]/wt[i];
            ratio.push_back({r, i});
        } // calculate ratio and store in vector, double because ratio can be fractional
        
        sort (ratio.rbegin(), ratio.rend()); // reverse sort based on ratio
        
        double totalValue = 0.0; // to store total value of knapsack
        
        for (int i = 0; i < n; i++) {
            int idx = ratio[i].second; // get index of item from ratio vector
            if(wt[idx] <= capacity) { 
                totalValue += val[idx];
                capacity -= wt[idx];
            } // if weight of item is less than or equal to capacity, add val to totalValue and reduce capacity
            else {
                double frac = (double) capacity/wt[idx]; // calculate fraction of item if weight is more than capacity
                totalValue += val[idx] * frac; // add fractional value to totalValue
                break; // knapsack is full
            }
        }
        return totalValue;
    }
};
