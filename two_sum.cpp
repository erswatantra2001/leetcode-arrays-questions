// approach 1 (brute force approach)-------------------------------


// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
        
//         for(int i = 0;i < n;i++){
//             for(int j = i+1;j < n;j++){
                
//                 if(nums[i]+nums[j] == target){
//                     return {i,j};
//                 }
//             }
//         }
        
//         return {-1,-1};
//     }
// };


// approach 2 (using unordered map)----------------------------------


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> m;
//         int n = nums.size();
//         for(int i = 0;i < n;i++){
//            int x = nums[i];
//             int y = target-x;
            
//             if(m.find(y) != m.end()){
//                 return {i,m[y]};
//             }
            
//             m[nums[i]] = i;
//         }
        
//         return {-1,-1};
//     }
// };


// approach 3   (vectors of pairs    (most important used approach))-------------------

// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<pair<int,int>> v;
//         for(int i = 0;i < n;i++){
//             v.push_back({nums[i],i});
//         }
//         sort(v.begin(),v.end());
//         int s = 0;
//         int e = n-1;
//         while(s<e){
        
        
//         if(v[s].first + v[e].first == target){
//             return {v[s].second,v[e].second};
//         }
        
//         else if(v[s].first + v[e].first > target)
//         {
//             e--;
//         }
//         else{
//             s++;
//         }
//         }
//         return {-1,-1};
//     }
// };

