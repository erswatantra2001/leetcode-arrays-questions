// brute force approach of the  single number problem of leetcode

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0;i < n;i++){
            for(int j = 1;j < n;j++){
                if(nums[i] == nums[j]){
                    i++;
                    j++;
                }
                else{
                    return nums[i];
                }
            }
        }
        return 0;
    }
};

// optimized approach for single number program using c++ of leetcode

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n = nums.size();
        
        int result = 0;
        
        for(int i = 0;i < n;++i){
            result = result ^ nums[i];
        }
        return result;
    }
};