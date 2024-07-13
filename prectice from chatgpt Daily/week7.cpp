----Monday
Given a binary array nums, you are allowed to flip at most one 0 to 1. Return the length of the longest contiguous subarray containing only 1s after flipping.

Function Signature
int longestSubarrayWithOneFlip(vector<int>& nums);
Example
Input: nums = [1, 0, 1, 1, 0, 1]
Output: 4

#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithOneFlip(vector<int>& nums) {
    int maxLen = 0;
    int zeroCount = 0;
    int left = 0;
    
    for (int right = 0; right < nums.size(); ++right) {
        if (nums[right] == 0) {
            zeroCount++;
        }
        
        while (zeroCount > 1) {
            if (nums[left] == 0) {
                zeroCount--;
            }
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
    }
    
    return maxLen - 1; // we subtract 1 because we are allowed to flip one zero.
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << longestSubarrayWithOneFlip(nums);
    return 0;
}


//code 

-----Tuesday

-----Wednesday



-----Thursday

----- Friday


------saterday

Problem: Two Sum
Description:
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include<iostream>
#include<vector>
using namespace std;
vector<int> target_find(vector<int> v, int target){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target) return {i,j};
        }
    }
    return{};
}
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   vector<int>ans=target_find(v,target);
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
}
