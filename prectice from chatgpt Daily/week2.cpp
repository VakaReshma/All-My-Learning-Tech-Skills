
----Monday

Given an array containing n distinct numbers taken from the range 0 to n, find the one number that is missing from the array.
Example:
Input: [3, 0, 1]
Output: 2
Input: [9,6,4,2,3,5,7,0,1]
Output: 8


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int findMissingNumber(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size()-1;i++){
//         if(nums[i+1]-nums[i]==2){
//             return nums[i]+1;
//        }
//     }
//     if(nums[0] != 0) {
//         return 0;
//     }
//     if(nums[nums.size() - 1] != nums.size()) {
//         return nums.size();
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     cout<<findMissingNumber(v);


// }

logic only n natural numbers

//another  ans:
//a=(n*(n+1))/2
//b=sum of all natural numbers
//ans=a-b;

-----Tuesday

Problem Statement:
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays, and you may return the result in any order.

Example:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]

#include<iostream>
//  #include<vector>
//  using namespace std;
//  vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
//     vector<int> ans;
//     for(int i=0;i<nums1.size();i++){
//         for(int j=0;j<nums2.size();j++){
//             if(nums1[i]==nums2[j]){
//              ans.push_back(nums1[i]);
//               nums2.erase(nums2.begin() + j);
//               break;
//             }  
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//  }


//  int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> v;
//     vector<int> a;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//      for(int i=0;i<m;i++){
//         int p;
//         cin>>p;
//         a.push_back(p);
//     }
//     intersect(v, a);
//  }

-----wednesday
Problem Statement:
Write a function in C++ to find the first non-repeated character in a string. If all characters are repeated or the string is empty, 
return a special character like '\0'.
Example:

Input: "swiss"
Output: 'w'
Input: "relevel"
Output: 'r'
Input: "aabbcc"
Output: '\0'

// #include<iostream>
// #include<string>
// using namespace std;
// char firstNonRepeatedChar(const string& str){
//     for(int i=0;i<str.length();i++){
//           int count=0;
//         for(int j=0;j<str.length();j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(count==1) return str[i];
//     }
//   return '\0';
// }

// int main(){
//     string s;
//     cin>>s;
//     char result=firstNonRepeatedChar(s);
//     cout<<result;
// }

-----Thursday

Problem Statement:
Write a function in C++ to rotate an array of integers by k steps to the right. For example, if the array is [1, 2, 3, 4, 5, 6, 7] and k = 3, the array should become [5, 6, 7, 1, 2, 3, 4].

Example:
Input: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
Output: [5, 6, 7, 1, 2, 3, 4]



#include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void rotateArray(vector<int>& nums, int k){
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k,nums.end());
//     reverse(nums.begin(),nums.end());
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i];
//     }
   
// }
    

  

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int k;
//     cin>>k;
//    rotateArray(v,k);
//    return 0;
// }

----- Friday

Problem Statement:
Write a function in C++ to check if two given strings are anagrams of each other. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

Example:
Input: s = "anagram", t = "nagaram"
Output: true
Input: s = "rat", t = "car"
Output: false

// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool isAnagram(string s, string t){
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t) return true;
//     return false;
// }


// int main(){
//     string st1,st2;
//     cin>>st1>>st2;
//     cout<<isAnagram( st1, st2);
// }

----saterday

Problem: Merge Two Sorted Arrays
Problem Statement:
Write a function in C++ to merge two sorted arrays into a single sorted array. The merged array should also be sorted.

Function Signature:
Example:
Input: arr1 = [1, 3, 5, 7], arr2 = [2, 4, 6, 8]
Output: [1, 2, 3, 4, 5, 6, 7, 8]

//#include<iostream>
// #include<vector>
// using namespace std;
// vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2){
//     int i=0;
//     int j=0;
//     vector<int> ans;
//         while(i<arr1.size() && j<=arr2.size()){
//             if(arr1[i]<arr2[j]){
//                ans.push_back(arr1[i]);
//                i++;
//             }
//             else{
//                 ans.push_back(arr2[j]);
//                j++;
//             }  
//         }
//         while(i<arr1.size()){
//             ans.push_back(arr1[i]);
//             i++;
//         }
//         while(j<arr2.size()){
//             ans.push_back(arr2[j]);
//                j++;
//         }
//         // for(int i=0;i<ans.size();i++){
//         //     cout<<ans[i]<<" ";
//         // }
//         return ans;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> v;
//     vector<int> x;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<m;i++){
//         int p;
//         cin>>p;
//         x.push_back(p);
//     }
//      vector<int> result = mergeSortedArrays(v, x);

//     for(int num : result) {
//         cout << num << " ";
//     }


// }
