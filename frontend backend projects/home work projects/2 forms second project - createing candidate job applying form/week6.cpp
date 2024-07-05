// ----Monday
// Given an array of integers, return the length of the longest subarray with a sum of 0.

// Function Signature:

// int longestZeroSumSubarray(vector<int>& nums);
// Example:

// Input: nums = [1, 2, -2, 4, -4]
// Output: 4

#include <iostream>
#include <vector>
using namespace std;

int longestZeroSumSubarray(vector<int>& nums) {
    int n = nums.size();
    int maxLength = 0;

    for (int start = 0; start < n; ++start) {
        int sum = 0;
        for (int end = start; end < n; ++end) {
            sum += nums[end];
            if (sum == 0) {
                int currentLength = end - start + 1;
                maxLength = max(maxLength, currentLength);
            }
        }
    }

    return maxLength;
}

int main() {
    vector<int> nums = {1, 2, -2, 4, -4};
    int result = longestZeroSumSubarray(nums);
    cout << "Length of the longest subarray with sum 0: " << result << endl;
    return 0;
}

// -----Tuesday

// Problem Statement
// Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

// Function Signature:
// vector<int> productExceptSelf(const vector<int>& nums);
// Example:
// Input: nums = [1, 2, 3, 4]
// Output: [24, 12, 8, 6]


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>> v[i];
    }
    
    vector<int> pre(n,1);
   
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]*v[i-1];
    }
    vector<int> suf(n,1);
   
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]*v[i+1];
    }
    for(int i=n-2;i>=0;i--){
        pre[i]=pre[i]*suf[i];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i];
    }
     
}

// -----Wednesday

// Given a string s, return the length of the longest substring that contains at most two distinct characters.

// Example:
// Input: s = "eceba"
// Output: 3
// Explanation: The longest substring with at most two distinct characters is "ece" which has a length of 3.

// Input: s = "ccaabbb"
// Output: 5
// Explanation: The longest substring with at most two distinct characters is "aabbb" which has a length of 5.

// Write a function to solve the problem:

// int lengthOfLongestSubstringTwoDistinct(string s);
// Constraints:
// 0 <= s.length <= 10^5
// s consists of English letters.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> count(256,0);
    int distinctcount=0;
    int maxLen=0;
    int i=0;
    for(int j=0;j<s.length();j++){
        if(count[s[j]]==0){
            distinctcount++;
        }
        count[s[j]]++;
        while(distinctcount>2){
          count[s[i]]--;
          if (count[s[i]] == 0) {
                distinctcount--;  
            }
            i++;
        }
        maxLen=max(maxLen,j-i+1);
        
    }
    cout<<maxLen;
}



// -----Thursday

// Problem: Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and use only constant extra space.

// Function Signature:
// int findDuplicate(vector<int>& nums);
// Example:

// Input: nums = [1,3,4,2,2]
// Output: 2

// Input: nums = [3,1,3,4,2]
// Output: 3

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]) return nums[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   cout<< findDuplicate(v);
}

// ----- Friday

// You are given an array of integers arr and an integer k. Your task is to find the maximum sum of a subarray of size k.

// Example
// Input:
// arr = [2, 1, 5, 1, 3, 2]
// k = 3
// Output:
// 9
// Explanation:
// The subarray with the maximum sum of size k is [5, 1, 3] which sums up to 9.

// Function Signature
// int maxSumSubarray(vector<int>& arr, int k);

#include<iostream>
#include<vector>
using namespace std;
int maxSumSubarray(vector<int>& arr, int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxsum=sum;
    int maxidx=1;
    int i=1;
    int j=k;
    while(j<arr.size()){
        sum=sum+arr[j]-arr[i-1];
        if(sum>maxsum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    return maxsum;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxSumSubarray(v, k);

}

//------saterday
//next permutation
// input 115
// output 151

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums){
     int idx=-1;
     int n=nums.size()-1;
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]) {
            idx=i;
            break;
        }
    }
    if(idx!=-1){
        for(int i=n;i>=idx;i--){
            if(nums[i]>nums[idx]){
                 swap(nums[i],nums[idx]);
                  break;
            }
        }
    }
    reverse(nums.begin()+idx+1,nums.end());

    for(int i=0;i<=n;i++){
        cout<<nums[i]<<" ";
   }

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
   }
   nextPermutation(v);

}