
//advace sorting 

// merge sorting
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &a,vector<int> &b,vector<int> &ans){
//     int i=0;
//     int j=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//             ans.push_back(a[i]);
//             i++;
//         }
//         else{
//             ans.push_back(b[j]);
//             j++;
//         }       
//     }
//     while(i<a.size()){
//         ans.push_back(a[i]);
//             i++; 
//     }
//     while(j<b.size()){
//         ans.push_back(b[j]);
//         j++;
//     }
// }
// void mergesort(vector<int> &v){
//     int n=v.size();
//     if(n==1) return ;
//     int n1=n/2;
//     int n2=n-n/2;
//     vector<int> a(n1);
//     vector<int> b(n2);
//     for(int i=0;i<n1;i++){
//       a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//       b[i]=v[n1+i];
//     }
//     mergesort(a);
//     mergesort(b);
//      v.clear();
//    merge(a,b,v);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     mergesort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


// home work

//Given an array of integers, sort it in descending order using merge sort algorithm.

//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  void merge(vector<int> &a,vector<int> &b,vector<int> &ans){
//     int i=0;
//     int j=0;
//     while(i<a.size() && j<b.size()){
//             if(a[i]>=b[j]){
//                 ans.push_back(a[i]);
//                 i++;
//             }
//             else{
//                 ans.push_back(b[j]);
//                 j++;
//             }
//     }
//         while(i<a.size()){
//             ans.push_back(a[i]);
//                 i++;
//         }
//         while(j<b.size()){
//             ans.push_back(b[j]);
//                 j++;
//         }

      
//  }
//  void mergeSort(vector<int> &v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=n/2;
//     int n2=n-n/2;
//     vector<int> a(n1);
//     vector<int> b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=v[n1+j];
//     }
//     mergeSort(a);
//     mergeSort(b);
//     v.clear();
//     merge(a,b,v);
//  }
//  int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     mergeSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//  }

// count inversion
// two eleents an array a, a[i] and a[j] from an inversion if a[i]>a[j] and i<j.given an 
// array of integers . Find the inverstion count in the array.

// #include<iostream>
// #include<vector>
// using namespace std;
// int c=0;
// int inversion(vector<int> &a,vector<int> &b){
//     int i=0;
//     int j=0;
//     int count=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]>b[j]){
//             count +=a.size()-i;
//             j++;
//         } 
//         else i++;
//     }
//     return count;
// }
// void merge(vector<int> &v,vector<int> &a,vector<int> &b){
//     int i=0;
//     int j=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//             v.push_back(a[i]);
//             i++;
//         }
//         else{
//             v.push_back(b[j]);
//             j++;
//         }
//     }
//         while(i<a.size()){
//             v.push_back(a[i]);
//             i++;
//         }
//         while(j<b.size()){
//              v.push_back(b[j]);
//             j++;
//         }
// }
// void mergesort(vector<int> &v){
//     int n=v.size();
//     if(n==1) return ;
//     int n1=n/2;
//     int n2=n-n/2;
//     vector<int>a(n1);
//     vector<int>b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[n1+i];
//     }
//     mergesort(a);
//     mergesort(b);
//     c+=inversion(a,b);
//     v.clear();
//     merge(v,a,b);
//     // a.clear();
//     // b.clear();
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     mergesort(v);
//     cout<<c;
//     return 0;
// }

// Reverse Pairs (Leetcode Problem) : Given an integer array nums, return the number of reverse
// pairs in the array.
// A reverse pair is a pair (i, j) where:
// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].

// #include<iostream>
// #include<vector>
// using namespace std;
// int c=0;
// int inversion(vector<int> &a,vector<int> &b){
//     int i=0;
//     int j=0;
//     int count=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]>2*b[j]){
//             count +=a.size()-i;
//             j++;
//         } 
//         else i++;
//     }
//     return count;
// }
// void merge(vector<int> &v,vector<int> &a,vector<int> &b){
//     int i=0;
//     int j=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//             v.push_back(a[i]);
//             i++;
//         }
//         else{
//             v.push_back(b[j]);
//             j++;
//         }
//     }
//         while(i<a.size()){
//             v.push_back(a[i]);
//             i++;
//         }
//         while(j<b.size()){
//              v.push_back(b[j]);
//             j++;
//         }
// }
// void mergesort(vector<int> &v){
//     int n=v.size();
//     if(n==1) return ;
//     int n1=n/2;
//     int n2=n-n/2;
//     vector<int>a(n1);
//     vector<int>b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[n1+i];
//     }
//     mergesort(a);
//     mergesort(b);
//     c+=inversion(a,b);
//     v.clear();
//     merge(v,a,b);
//     // a.clear();
//     // b.clear();
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     mergesort(v);
//     cout<<c;
//     return 0;
// }

// quick sort

// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(vector<int> &v,int si,int ei){
//     int pivele=v[si];
//     int count=0;
//     for(int i=si+1;i<=ei;i++){
//         if(v[i]<=pivele) count++;
//     }
//     int pividx=count+si;
//     swap(v[si],v[pividx]);
//     int i=si;
//     int j=ei;
//     while(i<pividx && j>pividx){
//         if(v[i]>pivele && v[j]<=pivele){
//            swap(v[i],v[j]); 
//            i++;
//            j--;
//         }
//         else if(v[i]<=pivele ) i++;
//         else j--;
//     }
//     return pividx;
// }
// void quicksort(vector<int> &v,int si,int ei){
//     if(si>=ei) return;
//     int pi=partition(v,si,ei);

//     quicksort(v,si,pi-1);
//     quicksort(v,pi+1,ei);

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//        cin>>v[i]; 
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     quicksort(v,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

//write  a program to find kth smallest element in an array using Quicksort
//quick select

// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(vector<int> &v,int si,int ei){
//     int pivele=v[si];
//     int count=0;
//     for(int i=si+1;i<=ei;i++){
//         if(v[i]<=pivele) count++;
//     }
//     int pividx=count+si;
//     swap(v[si],v[pividx]);
//     int i=si;
//     int j=ei;
//     while(i<pividx && j>pividx){
//         if(v[i]>pivele && v[j]<=pivele){
//            swap(v[i],v[j]); 
//            i++;
//            j--;
//         }
//         else if(v[i]<=pivele ) i++;
//         else j--;
//     }
//     return pividx;
// }
// int quicksort(vector<int> &v,int si,int ei,int k){
//        int pi=partition(v,si,ei);
//       if(pi+1==k) return v[pi];
//    else if(pi+1 <k) return quicksort(v,pi+1,ei,k);
//     else return quicksort(v,si,pi-1,k);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//        cin>>v[i]; 
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     int k=3;
//     cout<<quicksort(v,0,n-1,k); 
//     return 0;
// }

//home work

// Which of the following sorting algorithms is used along quicksort to sort the sub arrays?
// a) Merge Sort
// b) Selection Sort
// c) Insertion Sort
// d) Bubble Sort

//ans:c

// How many subarrays does the partitioning step of the quick sort algorithm divide the entire
// array into?
// a) one
// b) two
// c) depends on the elements of the array
// d) depends on the size of the array

//ans:b

// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]

// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={3, 8, 6, 7, 5, 9, 10};
// int n=sizeof(arr)/sizeof(arr[0]);
// int first=-1;
// int second=-1;
//     for(int i=0;i<=n;i++){
//         if(arr[i]>arr[i+1]){
//                 if(first==-1){
//                    first=i;
//                 }
//             else{
//                 second=i+1;
//                 break;
//             }
//         }
//     }
//     swap(arr[first],arr[second]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//cyclic sort

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int i=0;
//     while(i<n){
//         int correct_idx=v[i]-1;
//         if(i==correct_idx) i++;
//         else swap(v[i],v[correct_idx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

//missing number 

// given an array nums,containg n distant numbers in the range [0,n], return the only number in the range that is missing from the array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int i=0;
//     while(i<n){
//         int correctidx=v[i];
//         if(i==correctidx || v[i]==n) i++;
//         else swap(v[i],v[correctidx]);
//     }
//     for(int i=0;i<n;i++){
//         if(i!=v[i]) {
//             cout<<i;
//             break;
//         }
//     }
// }

//first missing positive

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//       cin>> v[i];
//     }
//     int mis=n+1;
//     int i=0;
//    while(i<n){
//         int correct_idx=v[i]-1;
//         if(v[i]>0 && v[i]<=n && v[i] !=v[correct_idx]){
//             swap(v[i],v[correct_idx]);
//         }
//         else i++;
//     }
//     for(int i=0;i<n;i++){
//         if(v[i]!=i+1) {
//           mis=i+1;
//           break;
//         }
//     }
//     cout<<mis;
// }


// What is the worst case time complexity of cycle sort?
// a) O(n)
// b) O(log n)
// c) O(n log n)
// d) O(n*n)

// ans: a

// You have a set of integers s , which originally contains all the numbers from 1 to n .
// Unfortunately, due to some error, one of the numbers in s got duplicated to another number
// in the set, which results in repetition of one number and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form
// of an array. [Leetcode 645]
// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1]
// Output: [1,2]

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
    
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         if(v[i]!=i+1) {
//             cout<<v[i]<<" "<<i+1<<endl;
//          ans.push_back(v[i]);
//          ans.push_back(i+1);
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }

// Given an integer array nums of length n where all the integers of nums are in the range [1,
// n] and each integer appears once or twice, return an array of all the integers that appears
// twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1,2]
// Output: [1]

// Example 3:
// Input: nums = [1]
// Output: []

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int i=0;
//     while(i<n){
//         if(v[i] >= 1 && v[i] <= n && v[i] != i + 1 && v[i] != v[v[i] - 1]) swap(v[i],v[v[i]-1]);
//         else i++;
//     }
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         if(v[i]!=i+1) ans.push_back(v[i]);
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i];
//     }

// }
