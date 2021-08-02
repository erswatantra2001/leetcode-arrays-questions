// this is the brute force approach for 3 sum problem

class Solution {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {

    int n = nums.size();

    for(int i = 0;i < n;i++){
      for(int j = i+1;j < n;j++){
        for(int k = j+1;k < n;k++){
          int summ = nums[i]+nums[j]+nums[k];

          if(summ == 0){
            return i,j,k;
          }
        }
      }
    }
};

// this is the optimal approach for 3 sum problem

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());

        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();

        for(int i = 0;i < n-2;i++){

        int val = nums[i];
        int low = i+1;
        int end = n-1;

        while(low < end){
            int summ = val+nums[low]+nums[end];

            if(summ == 0){
                s.insert({val,nums[low++],nums[end--]});
            }

            else if(summ< 0){
                low++;
            }

            else{
                end--;
            }
        }
        }

        for(auto a : s){
            ans.push_back(a);
        }
        return ans;
    }
};
