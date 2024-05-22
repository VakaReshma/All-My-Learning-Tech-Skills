
// Binary search -optimization of code

//use bininary search to optimize the code to write
//arr[]={1,2,4,5,9,15,18,21}
//target =18

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int low=0;
//     int high=n-1;
//     int mid=0;
//     while(low<=high){
//         mid=low+(high-low)/2;
       
//         if(arr[mid]==target) {
//             cout<<"target is find";
//             break;
//         }
//       else if(arr[mid]<target) low=mid+1;
//       else if(arr[mid]>target) high=mid-1;
//    }
// }

//Lower bound
//Ques: Given a sorted integer array and an integer 'X',find lower bound of x.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int lowertarget;
//     cin>>lowertarget;
//     int i=0;
//     int j=n-1;
//     int mid=0;
//     bool flag=false;
//     while(i<=j){
//          mid=i+(j-i)/2;
//         if(arr[mid]==lowertarget){
//            flag=true;
//            cout<<arr[mid-1];
//            break;
//         } 
//         else if(arr[mid]<lowertarget) i=mid+1;
//         else if(arr[mid]>lowertarget) j=mid-1;
//     } 
//     if(flag==false) cout<<arr[j];
// }

// Ques: Given a sorted integer array and an integer 'X',find upper bound of x.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int lowertarget;
//     cin>>lowertarget;
//     int i=0;
//     int j=n-1;
//     int mid=0;
//     bool flag=false;
//     while(i<=j){
//          mid=i+(j-i)/2;
//         if(arr[mid]==lowertarget){
//            flag=true;
//            cout<<arr[mid-1];
//            break;
//         } 
//         else if(arr[mid]<lowertarget) i=mid+1;
//         else if(arr[mid]>lowertarget) j=mid-1;
//     } 
//     if(flag==false) cout<<arr[j+1];
// }

//ques: Given a sorted array of n elements and a target "X". Find the first occurrence of 'x' in the array .
// if 'x' does not exit return -1.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0;
//     int j=n-1;
//     int x;
//     cin>>x;
   
//     bool flag=true;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(arr[mid]==x){
//              if(arr[mid-1]!=x){
//                 cout<<i<<arr[mid]<<endl;;
//                 flag=false;
//                 break;
//             }
//             else{
//                 j=mid-1;
//             }
            
//         }
//         else if(arr[mid]<x) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==true) cout<<"-1"; 
// }

// Given a sorted array of non negitive distant intergers find the smallest missing non negitive element in it.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0;
//     int j=n-1;   
//     int ans=-1;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(arr[mid]==mid) i=mid+1;
//         else{
//             ans=mid;
//             j=mid-1;
//         }
//     }
//     cout<<ans;  
// }

//square root sqrt(n)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int i=0;
//     int j=n;
//     bool flag=true;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(mid*mid==n){
//             flag=false;
//             cout<<mid;
//             break;
//         }
//         else if(mid*mid<n) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==true) cout<<j;
// }

//homework

// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int i=0;
//     int j=n-1;
//     bool flag=false;
//     while(i<=j){
//          int mid=i+(j-i)/2;
//          if(arr[mid]==target){
//             if(arr[mid+1]!=target){
//                  cout<<mid;
//                  flag=true;
//                  break;
//             } 
//             else i=mid+1;
//         }
//         else if(arr[mid]<target) i=mid+1;
//         else j=mid-1;
//     }
//     //if(flag ==false) cout<<"-1";
// }


// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,0,0,0,1,1};
//     int n=4;
//     int i=0;
//     int j=n-1;
//     int firstidx=-1;
//     bool flag=false;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(arr[mid]==1){
//             if(arr[mid-1]!=1){
//                 firstidx=mid;
//                 flag=true;
//                 break;
//             }
//         }
//         else if(arr[mid]<1) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false) cout<<"0";
//     else cout<<n-firstidx;
// }

// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4]={{0,0,1,1},{1,1,1,1},{0,0,0,0}};
//     int n=3;
//     int m=4;
//     int max_ones_row=-1;
//     int max_ones=-1;
//     for(int k=0;k<n;k++){
//         int i=0;
//         int j=m-1;
//         int idx_of_one=m;
//         while(i<=j){
//             int mid=i+(j-i)/2;
//             if(arr[k][mid]==1){
               
//                 if(mid==0||arr[k][mid-1]!=1){
//                     // cout<<arr[k][mid-1]<<" "<<k<<" "<<mid<<endl;
//                     idx_of_one=mid;
//                     break;
//                 }
//                 else{
//                     j=mid-1;
//                 }
//             }
//             else if(arr[k][mid]<=1) i=mid+1;
//             else j=mid-1;

//         }
//         int total_no_of_ones = m - idx_of_one; 
            
//             // cout<<total_no_of_ones;
//          if (total_no_of_ones > max_ones) {
//             max_ones = total_no_of_ones;
//             max_ones_row = k;
//         }


//     }
//     cout<<max_ones_row<<" "<<max_ones;
// }

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//        int  mid=i+(j-i)/2;
//         if(arr[mid]==mid+1)  i=mid+1;
//         if(arr[mid]==mid){
//            if(arr[mid]==arr[mid-1]){
//             cout<<arr[mid];
//             break;
//            }
//            else j=mid-1;
//         }
//     }
// }

// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes

// Input 2: n = 45
// Output 2: no

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int j=n;
//     bool flag=false;
//     while(i<j){
//         int mid=i+(j-i)/2;
//         if(mid*mid==n) {
//            cout<<"yes";
//            flag=true;
//            break;
//         } 
//         else if(mid*mid<n) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false) cout<<"no";
// }


// You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     int j=n;
//     bool flag= false;
//     while(i<=j){
//         int mid=i+(j-i)/n;
//         int k=(mid*(mid+1))/2;
//         if(k==n) {
//             cout<<mid<<" stair is completly formed";
//             flag= true;
//             break;
//         }
//         else if(k<n) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false) cout<<j<<" stair is are  completly formed and  "<<j+1<<" not complited";
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     long long t=(long long)(2*(long long)(n));
//     long long d=4*t + 1;
//     int k=(sqrt(d)-1)/2;
//     cout<<k;
// }

// most important

// montain array peak element
// n:6
// input: 1 3 5 4 2 0
// 0utput: 2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int k=0;k<n;k++){
//         cin>>arr[k];
//     }
//     int i=1;
//     int j=n-2;
//     while(i<=j){
//         int mid = i+(j-i)/n;
//         if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])  {
//             cout<<arr[mid]; 
//             break;
//         }
//         else if(arr[mid]>arr[mid+1]) j=mid-1;
//         else i=mid+1;
//     } 
// }
//

//reverse sort array target need to find
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     int i=0;
//     int j=n-1;
//     int flag=false;
//     while(i<=j){
//        int mid= i+(j-i)/2;
//        if(arr[mid]==x){
//          flag=true;
//          cout<< mid;
//          break;
//        } 
//        if(arr[i]<=arr[mid]){
//             if(arr[i]<=x && x<=arr[mid]) j=mid-1;
//             else i=mid+1;
//        }
//        else{
//             if(arr[mid]<=x && x<=arr[j]) i=mid+1;
//             else j=mid-1;
//        }
       
//     }
//     if(flag==false) cout<<"target not there";
// }


//find k closest

// #include <iostream>
// #include <vector>
// #include <cstdlib> // For abs()
// #include <algorithm> // For min()
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int x, k;
//     cin >> x >> k;
//     vector<int> v;
//     //case-1
//     if(x < arr[0]) {
//         for(int i = 0; i < min(k, n); i++) {
//             v.push_back(arr[i]);
//         }
//     }
//     //case-2
//     else if(x > arr[n - 1]) {
//         int h = n - 1;
//         int q = k - 1;
//         while(q >= 0) {
//             v.push_back(arr[h]);
//             h--;
//             q--;
//         }
//         reverse(v.begin(), v.end());
//     }
//     //case-3
//     else {
//         int lo = 0;
//         int hi = n - 1;
//         bool flag = false;
//         while(lo <= hi) {
//             int mid = lo + (hi - lo) / 2;
//             if(arr[mid] == x) {
//                 flag = true;
//                 break;
//             }
//             else if(arr[mid] < x) lo = mid + 1;
//             else hi = mid - 1;
//         }
//         int lb = hi;
//         int ub = lo;
//         if(flag) {
//             lb = ub = hi + 1;
//         }
//         while(v.size() < k) {
//             if(lb >= 0 && (ub >= n || abs(x - arr[lb]) <= abs(x - arr[ub]))) {
//                 v.push_back(arr[lb]);
//                 lb--;
//             }
//             else if(ub < n && (lb < 0 || abs(x - arr[lb]) > abs(x - arr[ub]))) {
//                 v.push_back(arr[ub]);
//                 ub++;
//             }
//         }
//     }
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// sum of square numberse a2+b2=c

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int flag= false;
//   int left=0;
//   int right=(int) sqrt(n);
//   while(left<=right){
//     int mid= left*left+right*right;
//     if(mid==n) {
//       flag=true;
//       cout<<true;
//       break;
//     }
//     else if(mid<n){
//        left++;
//     }
//     else {
//       right--;
//     }
//   }
//    if(flag==false) cout<<false;
// }


// Write a program to apply binary search in array sorted in decreasing order.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int k=0;k<n;k++){
//         cin>>arr[k];
//     }
//     int target;
//     cin>>target;
//     int i=0;
//     int j=n-1;
//     bool flag=false;
//     while(i<=j){
//        int mid=i+(j-i)/n;
//         if(arr[mid]==target) {
//            cout<<mid;
//            flag=true;
//             break;
//         }
//         else if(arr[mid]>target) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false) cout<< j;
// }



// You have a sorted array of infinite numbers, how would you search an element in the array?

// #include<iostream>
// using namespace std;
// int main(){
//    int target;
//    cin>>target;
//    //assuume like infinite loop
//     int arr[9]={1,2,4,7,10,12,15,18,19};
//     int n=9;
//     int i=0;
//     int j=1;
//     while(arr[j]<target){
//         i=j;
//         j*=2;
//     }
//     bool flag=false;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(arr[mid]==target){
//             flag=true;
//             cout<<flag;
//             break;
//         }
//         else if(arr[mid]<target)  i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false) cout<<flag;
// }

// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false


//method-1

// time complexity = O(log(n*m));
// space complexity = O(n*m);

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
   
//     int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int n=3;
//     int m=4;
//     vector<int> v(3*4,0);
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             v[k++]=arr[i][j];
//         }
//     }
//     bool flag=false;
//     int p=0;
//     int q=n*m-1;
//      int target;
//     cin>>target;
//     while(p<=q){
//         int mid=p+(q-p)/2;
//         if(v[mid]==target){
//             flag=true;
//             cout<<flag;
//             break;
//         }
//         else if(v[mid]<target)  p=mid+1;
//         else q=mid-1;
//     }
//     if(flag==false)  cout<<flag;  
// }

//method two

// time complexity :
// space complexity:O(1)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int n=3;
//     int m=4;
//     int target;
//     cin>>target;
//     int i=0;
//     int j=n*m-1;
//     bool flag=false;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(arr[mid/m][mid%m]==target){
//             flag=true;
//            cout<<true;
//            break;  
//         } 
//         else if(arr[mid/m][mid%m]<target) i=mid+1;
//         else j=mid+1;
//     }
//     if(flag==false) cout<<flag;
// }



// There is an integer array nums sorted in non-decreasing order (not necessarily with
// distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k
// < nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
// nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
// [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
// [4,5,6,6,7,0,1,2,4,4] .
// Given the array nums after the rotation and an integer target , return true if target is in
// nums , or false if it is not in nums .
// You must decrease the overall operation steps as much as possible.
// Example 1:
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true
// Example 2:
// Input: nums = [2,5,6,0,0,1,2], target = 3
// Output: false

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int k=0;k<n;k++){
//         cin>>arr[k];
//     }
//     int target;
//     cin>>target;
//     bool flag=false;
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int mid=i+(i-j)/2;
//         if(arr[mid]==target) {
//             cout<<"true";
//             flag=true;
//             break;
//         }
//         else if(arr[i]==arr[mid] && arr[mid]==arr[n-1]){
//             i++;
//             j--;
//         }
//         else if(arr[i]<=arr[mid]){
//             if(arr[i]<=target && target<=arr[mid]) j=mid-1;
//             else i=mid+1;
//         }
//         else{
//             if(arr[mid]<=target && target<=arr[j]) i=mid+1;
//             else j=mid-1;
//         }
       
//     }
//      if(flag==false) cout<<"false";

// }



//capacity to ship packages within D days

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// bool check(int arr[],int n,int days,int mid){
  
//    int m=mid;
//    int count=1;
  
//    for(int i=0;i<n;i++){
//         if(m>=arr[i]){
//             m-=arr[i];
//         }
//         else{
//             count++;
//             m=mid;
//              m-=arr[i];
//         }
        
//    }
//    if(count>days) return false;
//    return true;

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int days;
//     cin>>days;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//       if(arr[i]>max) max=arr[i];
//       sum+=arr[i];
//     }
//     int min_capacity=-1;
//     int low = max;
//     int high = sum;
//     while(low<=high){
//         int mid= low+(high-low)/2;
//         if(check(arr,n,days,mid)) {
//             min_capacity=mid;
//             high=mid-1;
//         }
//         else low=mid+1;
//     }
//     cout<<min_capacity;
// }

//  koko bananas eatting
// #include <iostream>
// using namespace std;

// bool check(int mid, int arr[], int hours, int n) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (mid >= arr[i]) {
//             count++;
//         } else if (arr[i] % mid == 0) {
//             count += arr[i] / mid;
//         } else {
//             count += arr[i] / mid + 1;
//         }
//     }
//     return count <= hours;  // Ensure the total hours needed is less than or equal to the available hours
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int maxo = -1;
//     for (int i = 0; i < n; i++) {
//         maxo = max(arr[i], maxo);
//     }

//     int h;
//     cin >> h;
    
//     int ans = -1;
//     int lo = 1;
//     int hi = maxo; 
//     while (lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if (check(mid, arr, h, n)) {
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     cout << ans;
// }



//miminum time requtied to complete trips

// #include<iostream>
// using namespace std;
// bool check(int mid, int arr[],int total_trips,int n){
//     int trips=0;
//     for(int i=0;i<n;i++){
//         trips+=mid/arr[i];
//     }
//      return trips>=total_trips;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxo=-1;
//     for(int i=0;i<n;i++){
//         maxo=max(arr[i],maxo);
//     }
//     int ans=-1;
//     int total_trips;
//     cin>>total_trips;
//     int lo=1;
//     int hi=maxo*total_trips; 
//     while(lo<=hi){
//         int mid= lo+(hi-lo)/2;
//         if(check(mid,arr,total_trips,n)==true){
//             ans=mid;
//             hi=mid-1;
//         }
//         else lo= mid+1;
//     }
//     cout<<ans;
// }

