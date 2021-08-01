// brute force approach for merge sorted array(merge sort algo)


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int p = m-1;
        int q = n-1;
        int l = m+n-1;
        
        for(int i = l;i >m-1;){
            for(int j = q;j >= 0;){
                
                nums1[i] = nums2[j];
                i--;
                j--;
                
            }
        }
        sort(nums1.begin(),nums1.end());        
        return ;
    }
};


// the optimal approach for merge sorted array

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
        int j=  n-1;
        int l = m+n-1;
        
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j]){
                nums1[l] = nums1[i];
                l--;
                i--;
            }       
            else{
                nums1[l] = nums2[j];
                l--;
                j--;
            }
        }
        
        while(i >= 0){
            nums1[l] = nums1[i];
            l--;
            i--;
        }
        
        while(j >= 0){
            nums1[l] = nums2[j];
            l--;
            j--;
        }
    }
};