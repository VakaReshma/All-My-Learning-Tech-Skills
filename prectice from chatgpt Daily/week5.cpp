//----Monday

// Problem: Find Missing Number

// Given an array containing n distinct numbers taken from the range 0 to n. Find the one that is missing from the array.
// Example:
// Input: [3,0,1]
// Output: 2

// Input: [0,1]
// Output: 2

// Input: [9,6,4,2,3,5,7,0,1]
// Output: 8

#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
int i=0;
while(i<nums.size()){
int corrrect_idx=nums[i]-1;
if(nums[i]>0 && nums[i]<=nums.size() && nums[i]!=nums[corrrect_idx]){
swap(nums[i],nums[corrrect_idx]);
}
else i++;
}
int ans=nums.size()+1;
for(int i=0;i<nums.size();i++){
if(nums[i]!=i+1) return i+1;
}
return ans;
}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
cout<< missingNumber(v);


//code 

//-----Tuesday
// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// Example:
// Input:
// "23"
// Output:
// ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Explanation:
// Here are the mappings:
// rust
// 2 -> "abc"
// 3 -> "def"
// 4 -> "ghi"
// 5 -> "jkl"
// 6 -> "mno"
// 7 -> "pqrs"
// 8 -> "tuv"
// 9 -> "wxyz"

#include<iostream>
#include<vector>
#include<string>
using namespace std;
string string_getfrom(char c){
   switch(c){
      case '2': return "abc";
      
      case '3': return "def";
      
      case '4': return "ghi";
     
      case '5': return "jkl";
     
      case '6': return "mno";
      
      case '7': return "pqrs";
      
      case '8': return "tuv";
      
      case '9': return "wxyz";
     default: return "";
      
   }
  
}

int main(){
   string a="23";
   string aof_2=string_getfrom(a[0]);
   string aof_3=string_getfrom(a[1]);
   // cout<<aof_2 <<aof_3;
   vector<string> ans;
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         string v="";
        v+= aof_2[i];
        v+=aof_3[j];
         ans.push_back(v);
      }
   }
   for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
   }
}

//-----Wednesday
// Write a C++ function that rotates a given matrix (2D vector) by 90 degrees clockwise.
// Example:
// Input:
// matrix = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]
// Output:
// rotatedMatrix = [
//     [7, 4, 1],
//     [8, 5, 2],
//     [9, 6, 3]
// ]
// Requirements:
// The function should have the following signature: void rotateMatrix(vector<vector<int>>& matrix).
// The function should modify the input matrix in place.
// The function should handle edge cases where the matrix is empty or has only one element.

#include<iostream> 
#include<vector>
using namespace std;
vector<vector<int>> array_rotate_90_degree(vector<vector<int>> &v){
   for(int i=0;i<v.size();i++){
      for(int j=i+1;j<v[0].size();j++){
         swap(v[i][j],v[j][i]);
      }
   }
   return v;
}
int main(){
   int n;
   int m;
   cin>>n>>m;
   vector<vector<int>> v(n,vector<int>(m));
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cin>>v[i][j];
      }
   }
   
   array_rotate_90_degree(v);
   for(int i=0;i<n;i++){
      for(int j=m-1;j>=0;j--){
         cout<<v[i][j]<<" ";
      }
      cout<<endl;
   }
}

//-----Thursday

// Find the First and Last Position of an Element in a Sorted Array
// Question:

// Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value. If the target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Function Signature:

// vector<int> searchRange(vector<int>& nums, int target);
// Example:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1, -1]

// Input: nums = [], target = 0
// Output: [-1, -1]


#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target){
   int i=0;
   int j=nums.size()-1;
   int first=-1;
   int second=-1;
   while(i<=j){
      int mid= i+(j-i)/2;
      if(nums[mid]==target){
         first=mid;
         j=mid-1; 
      }
      else if(nums[mid]>target) j=mid-1;
      else i=mid+1;
   }
   i=0;
   j=nums.size()-1;
   while(i<=j){
      int mid= i+(j-i)/2;
      if(nums[mid]==target){
        second=mid;
         i=mid+1;
        
      }
      else if(nums[mid]>target) j=mid-1;
      else i=mid+1;
   }
  return {first,second};
}

int main(){
   int n;
   cin>>n;
   int target;
   cin>>target;
   vector<int> v(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   
    vector<int> result=searchRange( v, target);
   cout<<result[0]<<" "<<result[1];
}



// ----- Friday
// Write a function in C++ to find the first missing positive integer in an unsorted array of integers. The function should have an algorithmic complexity of O(n).
// Problem: Find the Maximum Subarray Sum (Kadane's Algorithm)
// Write a function to find the maximum sum of a contiguous subarray in an array of integers.

// Example:
// Input: [−2,1,−3,4,−1,2,1,−5,4]
// Output: 6
// Explanation: The subarray [4,−1,2,1] has the maximum sum 6.

// Constraints:
// The array must contain at least one number.
// You should implement the solution using O(n) time complexity.


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   int sum=0;
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
      sum+=v[i];
      if(sum> maxi) maxi=sum;
      maxi=max(maxi,sum);
    
      if(sum<0) sum=0;
   }
   cout<<maxi;
}

// ------saterday

// Problem: Find All Pairs with a Given Sum in an Array

// Given an array of integers and a target sum, find all pairs of integers in the array that add up to the target sum.

// Example:
// Input: arr = [1, 5, 7, -1, 5], target = 6
// Output: [1, 5], [7, -1], [1, 5] 

// Input: arr = [2, 4, 3, 3], target = 6
// Output: [2, 4], [3, 3]


#include<iostream>
#include<vector>
using namespace std;
void target_pair(vector<int> &v,int target){
   vector<vector<int>> ans;
  for(int i=0;i<v.size();i++){
      for(int j=i+1;j<v.size();j++){
         if(v[i]+v[j]==target) {
           vector<int> pairs={v[i],v[j]};
           ans.push_back(pairs);
         }
      }
      
   }
   for(int i=0;i<ans.size();i++){
      for(int j=0;j<ans[0].size();j++){
          cout<<ans[i][j]<<" ";
      }
      cout<<endl;
   }
}

int main(){
   int n,target;
   cin>>n>>target;
   vector<int> v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   target_pair(v,target);

}
