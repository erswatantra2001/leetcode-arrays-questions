// this is the section code for searching the target in array if found return the index, otherwise return the position where the target should be inserted.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int s = 0;
        int e = nums.size()-1;
        
        while(s<=e){
            int mid = (s+e)/2;
            
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                e--;
            }
            else{
                s++;
            }
        }
        return s;
    }
};