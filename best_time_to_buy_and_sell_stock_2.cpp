// this si the optimal solution to the problem to buy and sell stocks multiple times.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>a) {
        int n = a.size();
        int profit = 0;
        for(int i = 1;i < n;i++){
            
            if(a[i] > a[i-1]){
                profit += (a[i]-a[i-1]);
            }
        }
        return profit;
    }
};