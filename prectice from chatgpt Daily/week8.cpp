----Monday

// Merge Two Sorted Lists
// Description:
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted linked list. The list should be made by splicing together the nodes of the first two lists.

// Example:

// Input: list1 = [1, 2, 4], list2 = [1, 3, 4]
// Output: [1, 1, 2, 3, 4, 4]

#include<iostream>
#include<vector>
using namespace std;
vector<int> sort_list(vector<int> a,vector<int> b){
    vector<int> res;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res.push_back(a[i]);
            i++;
        }
        else{
             res.push_back(b[j]);
             j++;
        }
    }
    while(i<a.size()){
        res.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        res.push_back(b[j]);
        j++;
    }

    return res;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    ans=sort_list(a,b);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

-----Tuesday

//  Valid Parentheses
// Description:
// Given a string s containing just the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets are closed by the same type of brackets.
// Open brackets are closed in the correct order.
// Examples:

// Input: s = "()"
// Output: true
// Input: s = "()[]{}"
// Output: true
// Input: s = "(]"
// Output: false
// Input: s = "([)]"
// Output: false
// Input: s = "{[]}"
// Output: true
// Constraints:

// 1 <= s.length <= 10^4
// s consists of parentheses only '()[]{}'.
// Function Signature:
// bool isValid(string s);

#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<char> &s){
     vector<char> ans;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='['||s[i]=='{'){
            if(s[i]=='('){
            ans.push_back(')');
            }
            else if(s[i]=='['){
             ans.push_back(']');
            }
            else{
            ans.push_back('}');
            }
        }
        else{
           if (!ans.empty() && s[i] == ans.back()) {
                ans.pop_back();
           } 
           else {
              return false;
            }
        }
    }
    return ans.empty();

}
int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
         cin>>s[i];
    }
    cout<<(isValid(s) ? "true":"false");  
}

-----Wednesday
// Find the Intersection of Two Arrays
// Description:
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique, and you may return the result in any order.

// Example:

// Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
// Output: [2]
// Input: nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
// Output: [9, 4]
// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000
// Function Signature
// vector<int> intersection(vector<int>& nums1, vector<int>& nums2);

#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
    vector<int> ans;
  
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
             if(nums1[i]==nums2[j]){
             ans.push_back(nums1[i]);
              nums2.erase(nums2.begin() + j);
              break;
            }  
        }
        
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int j=0;j<m;j++){
        cin>>v2[j];
    }
    vector<int> res=intersection(v1,v2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}




-----Thursday
// Find the Missing Number
// Description:
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Examples:

// Input: nums = [3, 0, 1]
// Output: 2
// Input: nums = [0, 1]
// Output: 2
// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8
// Constraints:

// n == nums.length
// 1 <= n <= 10^4
// All the numbers of nums are unique.
// nums is missing exactly one number in the range [0, n].
// Function Signature
// int missingNumber(vector<int>& nums);


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNumber(vector<int> &v){
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]!=i){
            return i;
        }
    }
    return v.size();
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<< missingNumber(v);
}

----- Friday
// Problem: Move Zeroes
// Description:
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Examples:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Input: nums = [0,0,1]
// Output: [1,0,0]
// Constraints:

// 1 <= nums.length <= 10^4
// -2^31 <= nums[i] <= 2^31 - 1

#include<iostream>
#include<vector>
using namespace std;
vector<int> zeros_left_move(vector<int> &v){
    int zeros_count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            v.erase(v.begin()+i);
            zeros_count++;
        }
    }
    cout<<zeros_count<<endl;
    for(int i=1;i<=zeros_count;i++){
        v.push_back(0);
    }
}
int main(){
     int n;
     cin>>n;
     vector<int> v(n);
    for(int i=0;i<n;i++){
         cin>>v[i];
    }
    zeros_left_move(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}


------saterday

// Problem: Rotate Array
// Description:
// Given an array, rotate the array to the right by k steps, where k is non-negative.

// Examples:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// Rotate 1 step to the right: [7,1,2,3,4,5,6]
// Rotate 2 steps to the right: [6,7,1,2,3,4,5]
// Rotate 3 steps to the right: [5,6,7,1,2,3,4]

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// Rotate 1 step to the right: [99,-1,-100,3]
// Rotate 2 steps to the right: [3,99,-1,-100]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& nums, int k){
    int n=nums.size()-1;
      if(k>n) k=k%n;
     reverse(nums.begin(),nums.begin()+n-k+1);
     reverse(nums.begin()+n-k+1,nums.end());
     reverse(nums.begin(),nums.end());
    for(int i=0;i<=n;i++){
        cout<<nums[i];
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i]<<" ";
    }
    rotate(v, k);
}
