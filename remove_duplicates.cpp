// this is the program of removing the dupliates from sorted array.

// the optimal approach for this question is to use a hash table.(or two pointer approach)

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int remove_duplicates(vector<int>& nums){
            int n = nums.size();

            int i = 0;

            for(int j = 1; j < n; j++){
                if(nums[j] != nums[i]){
                    i++;
                    nums[i] = nums[j];
                }
            }
            return i + 1;
}
};