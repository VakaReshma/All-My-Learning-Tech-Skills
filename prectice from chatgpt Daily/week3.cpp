
----Monday

Problem: Find the First Unique Character in a String
Write a function to find the first non-repeating character in a string. If all characters are repeating, return a special character (like '\0') indicating no unique character found.
Example:

Input: "leetcode"
Output: 'l'

Input: "loveleetcode"
Output: 'v'

Input: "aabb"
Output: '\0'

#include<iostream>
// #include<string>
// using namespace std;
// char compare_uniqe(string st1){
//     int z=st1.length();
//     int count;
//     for(int i=0;i<st1.length();i++){
//         count=0;
//         for(int j=0;j<st1.length();j++){
//             if(st1[i]==st1[j] && i!=j){
//                 count++;
//             }
//         }
//         if(count==0) return st1[i];
        
//     }
//   return '\0';
// }

// int main(){
//     string st1;
//     cin>>st1;
//     char res=compare_uniqe(st1);
//     if(res=='\0') cout<<"no unique letter";
//     else cout<<res;
// }

//code 

-----Tuesday

Write a function in C++ that finds the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

Example:
Input: ["flower", "flow", "flight"]
Output: "fl"

Input: ["dog", "racecar", "car"]
Output: ""
#include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std;
// string llprefix(vector<string> &v,int n){
//     sort(v.begin(),v.end());
//     string str1=v[0];
//     string str2=v[n-1];
//     int index=0;
//     while(index<=str1.length()-1){
//         if(str1[index]==str2[index]){
//             index++;
//         }
//         else{
//             break;
//         }
//     }
//     return index==0?"": str1.substr(0,index);
   

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<string> v;
//     for(int i=0;i<n;i++){
//         string q;
//         cin>>q;
//         v.push_back(q);
//     }
//     string result=llprefix(v,n);
//     cout<<result;
    
// }
-----wednesday

Find the Majority Element
Write a function in C++ to find the majority element in an array. The majority element is the element that appears more than n/2 times, where n is the size of the array.

Example:

Input: [3, 2, 3]
Output: 3
Input: [2, 2, 1, 1, 1, 2, 2]
Output: 2

#include<vector>
//  using namespace std;
// int magority(vector<int> &v,int n){
//    int count=0;
//    int mag=0;
//    for(int i=0;i<n;i++){
//          if(count==0){
//           count++;
//           mag= v[i];
//          }
//          else if(mag==v[i]) count++;
//          else count--;
//    }
//    return mag;
// }
//  int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//       v.push_back(q);
//    }
//    cout<<magority(v,n);

//  }
-----Thursday

Coding Problem: Remove Duplicates from a Sorted Array
Problem Statement:
Write a function in C++ that removes duplicates from a sorted array and returns the new length of the array. Do not allocate extra space for another array; you must do this by modifying the input array in-place with O(1) extra memory.

Example:
Input: nums = [1,1,2]
Output: 2, nums = [1, 2]

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0, 1, 2, 3, 4]

#include<iostream>
// #include<vector>
// using namespace std;
// int Remove_duplicates(vector<int> &nums){
//     int n=nums.size();
//     int k=1;
//     for(int i=1; i<n; i++){
//         if(nums[i] != nums[i-1]){
//                 nums[k] = nums[i];
//                 k++;
//         }
//     }
//         return k;
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
  
//    n=Remove_duplicates(v);
//    for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//    }
    
// }

----- Friday

Coding Problem: Reverse Words in a String
Problem Statement:

Write a function in C++ that takes a string s and returns a new string with the words in reverse order. A word is defined as a sequence of non-space characters. The words in the string will be separated by at least one space.

Example:

Input: "the sky is blue"
Output: "blue is sky the"

Input: " hello world "
Output: "world hello"

// #include<iostream>
// #include<string>
// #include<vector>
// #include<sstream>
// using namespace std;
// void reverseWords(string s){
//     stringstream ss(s);
//     string temp;
//     vector<string> v;
//     while(ss>>temp){
//        v.push_back(temp);
      
//     }
  
//     for(int i=temp.size()-1;i>=0;i--){
//         cout<<v[i]<<" ";
//     }
// }

// int main() {
//     string s;
//     getline(cin, s);
    
//     reverseWords(s);
   
// }

----saterday
 Find the Intersection of Two Arrays

Write a function in C++ that takes two integer arrays and returns an array of their intersection. Each element in the result must be unique.

Example:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

#include<iostream>
// #include<vector>
// using namespace std;
// vector<int> insertion_dupli(vector<int>v,vector<int> p,int n,int m){
//     vector<int> ans;
//     int count=0;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<m;j++){
//             if(v[i]==p[j]){
//             count++;
//             p.erase(p.begin()+j);
//             m--;
//             j--;
//             }
//         }
//         if(count>0) ans.push_back(v[i]);
//     }
//     return ans;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     vector<int> p;
//     for(int i=0;i<m;i++){
//         int r;
//         cin>>r;
//         p.push_back(r);
//     }
//     vector<int> ans;
//     vector<int> result= insertion_dupli(v,p,n,m);
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//    return 0;
// }