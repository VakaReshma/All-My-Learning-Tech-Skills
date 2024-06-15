
----Monday

Problem Statement:
Given a string, find the length of the longest substring without repeating characters.
Example:
Input: "abcabcbb"
Output: 3 (The answer is "abc", with the length of 3)

Input: "bbbbb"
Output: 1 (The answer is "b", with the length of 1)

Input: "pwwkew"
Output: 3 (The answer is "wke",3)


#include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int long_unique(string s){
//   vector<bool> arr(256,0);
//   int first=0;
//   int last=0;
//   int len=0;
//   while(last<s.length()){
//        while(arr[s[last]]){
//             arr[s[first]]=0;
//             first++;
//        }
//       arr[s[last]]=1;
//       len=max(len,last-first+1);
//        last++;
//     }
//     return len;
// }

// int main(){
//     string s;
//     cin>>s;
//    cout<<long_unique(s);
// }



//code 

-----Tuesday

Problem of the Day:
Problem: Write a function in C++ that takes a matrix (2D vector) and returns the transpose of the matrix. The transpose of a matrix is obtained by swapping the rows and columns.
Example:
Input:
1 2 3
4 5 6
7 8 9
Output:
1 4 7
2 5 8
3 6 9

#include<vector>
using namespace std;
void transpose(vector<vector<int>> v,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
      
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           int q;
           cin>>q;
          v[i][j] = q;
        }
    }
    transpose(v,n,m);
    
}

-----Wednesday

Find the Peak Element

Write a function in C++ that finds a peak element in an array. An element is a peak if it is greater than its neighbors. The function should return the index of any one of the peak elements.

Example:
Input: nums = [1, 2, 3, 1]
Output: 2 (3 is a peak element)

Input: nums = [1, 2, 1, 3, 5, 6, 4]
Output: 5 (6 is a peak element)
 
//#include<iostream>
// #include<vector>
// using namespace std;
// void peak_element(vector<int> &v){
//     int before_ele=0;
//     int peak=0;
//     for(int i=1;i<v.size();i++){
//           if(v[i]>v[i-1]){
//                before_ele=v[i-1];
//                peak=v[i];
//           }
//     }
//     cout<<before_ele<<"( "<<peak<<" is a peak element )";
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
//     peak_element(v);
// }

-----Thursday

Problem: Find the Pair with the Given Sum in an Array

Write a function in C++ that takes an array of integers and a target sum. The function should return a pair of indices of the two numbers such that they add up to the target sum. Assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]  // Because nums[0] + nums[1] == 9

Input: nums = [3, 2, 4], target = 6
Output: [1, 2]

//#include<vector>
// using namespace std;
// int main(){
//     int n,target;
//     cin>>n>>target;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int v1=0;
//     int v2=0;
//     for(int i=1;i<n;i++){
//        if(v[i-1]+v[i]==target) {
//           v1=i-1;
//           v2=i;
//           break;
//        }
//     }
//     cout<<v1<<" "<<v2;
// }

----- Friday
Write a function in C++ to find the first missing positive integer in an unsorted array of integers. The function should have an algorithmic complexity of O(n).

Example:

Input: [3, 4, -1, 1]
Output: 2

Input: [1, 2, 0]
Output: 3

#include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     int ans=n+1;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int i=0;
//    while(i<n){
//     int ele=v[i];
//     int ch=ele-1;
//         if( ele != v[ch] && ele>1 && ele<n){
//            int j=v[i]-1;
//             swap(v[i],v[j]);
//         }
//         else{
//             i++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(v[i] != i+1){
//             ans=i+1;
//             break;
//         }
//     }
//     cout<<ans;

// }

----saterday
Find the Missing Number

Given an array containing n distinct numbers taken from the range 0 to n. Find the one that is missing from the array.

Example:

Input: [3, 0, 1]
Output: 2

Input: [9,6,4,2,3,5,7,0,1]
Output: 8

 // #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int mis=0;
//     vector<int> v;
//     vector<int> ans(n);
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<n;i++){
//         if(v[i]>0){
//             int p=v[i]-1;
//             ans[p]++;
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         if(ans[i]==0){
//             mis=i+1;
//             break;
//         }
//     }
//     ans.clear();
//     cout<<mis;
// }