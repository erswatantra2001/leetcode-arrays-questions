// this code is for plus one leetcode problem. so, the approach behind this is check th econd part of the problem.if that value is equal to 9, then we need to add 1 to the first part in starting of array and if the value is equal to 0, then we need to add 1 to the first part in array.and if the value is less than 9, then we need to add 1 to the last part in array.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
      int n = nums.size()-1;
        
        for(int i = n;i >= 0;i--){
            
            if(nums[i] == 9){
                nums[i] = 0;
            }
            else{
                nums[i] = nums[i]+1;
                return nums;
            }
        }
        
        if(nums[0] == 0){
            nums.insert(nums.begin(),1);
            
        }
        
        return nums;

        }
};