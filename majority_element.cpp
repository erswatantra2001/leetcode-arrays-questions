// the brute force approach for finding majrity element using unordered map

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> m;
        
        for(auto a : nums){
            m[a]++;
            if(m[a] > n/2){
                return a;
            }
        }
        return -1;
    }
};

// the better approach for finding majority element is

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        return nums[n/2];
    }
};


// the optimal approachfor finding the majority element 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int c = 0,v = 0;

        for(auto a : nums){
            if(v == 0)
            {
                c = a;
            }

            if(c == a){
                v++;
            }
            else{
                v--;
            }
        }

        
        return c;
    }
};