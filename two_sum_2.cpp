//  the optimized approach for two sum 2 problem is

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        
        int s = 0;
        int e = n-1;
        
        while(s < e){
            
            if(numbers[s]+numbers[e] > target){
                e--;
            }
            else if(numbers[s]+numbers[e] < target){
                s++;
            }
            else{
                return {s+1,e+1};
            }
        }
        return {-1,-1};
    }
};