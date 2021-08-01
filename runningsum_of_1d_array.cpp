// the optimal approach for this question is 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        
        int ps = 0;
        
        for(int i = 1;i < n;){
            
            nums[i] = nums[i] + nums[ps];
            ps++;
            i++;
        }
        
        return nums;
    }
};