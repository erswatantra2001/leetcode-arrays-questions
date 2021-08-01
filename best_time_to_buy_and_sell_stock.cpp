// this is the optimal approach is used for after results with good time complexity



// #include<bits/stdc++.h>
// using namespace std;class Solution {
// public:
//     int maxProfit(vector<int> a) {
        
//         int n = a.size();
//         int maxProfit = 0;
//         int minSo = a[0];
        
//         for(int i = 0;i < n;i++){
            
//             minSo = min(minSo,a[i]);
//             int profit = a[i]-minSo;
//             maxProfit = max(maxProfit,profit);
            
//         }
//             return maxProfit;

//     }
// };