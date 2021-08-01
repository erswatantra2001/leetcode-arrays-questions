// optimal approach for finding the profit in buy and sell stock 3


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int> a) {
        int n = a.size();
        int min1 = INT_MAX;
        int maxProfit1 = 0;
        int min2 = INT_MAX;
        int maxProfit2 = 0;
        
        for(int i = 0;i < n;i++){
            
            min1 = min(min1,a[i]);
            int profit1 = a[i]-min1;
            maxProfit1 = max(maxProfit1,profit1);
        
            min2 = min(min2,a[i]-maxProfit1);
            int profit2 = a[i]-min2;
            maxProfit2 = max(maxProfit2,profit2);
        
        }
        return maxProfit2;

    }
};