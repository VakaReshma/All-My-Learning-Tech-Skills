
// bubble sort

// remember three things

// assanding ordwe
// takes flag element
// loops countunie up to n-i this decreses the space complexity
//stable sorting

//how many total no of swaps required to  sorted arrays n elements
// formula: (n(n-1))/2
// ex=(5*(5-1))/2=10 10 swaps required.

// bubble sort alorithm solveig ...asending ordwe an array
// input:n=8
// 1 8 2 9 3 4 5 6

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     bool flag=false;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=false;
//             }
//         }
//         if(flag==true){
//             cout<<"array is sorted";
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Sort a string in decreasing order of values associated after removal of values smaller than X.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string v=" ";
//     string str ="AZYZXBDJKX";
//     for(int i=0;i<str.length();i++){
//         if(str[i]>='X'){
//            v.push_back(str[i]);
//         }
//     }  
//     sort(v.begin(),v.end());
//     reverse(v.begin(),v.end());
//     cout<<v;
// }

// Which of the following(s) is/are true about bubble sort:
// It is stable sort                             true
// It has a worst case space complexity of O(n)  no, But has good also O(n(square))
// It involves swapping of adjacent elements     yes
// After each iteration, the greatest element is placed at the end of the array.    no, its upto gratrer then previous element. 

// What will the following array look like after one iteration of bubble sort [1,6,2,5,4,3].
// [1,3,2,4,5,6]
// [1,2,3,4,5,6]
// [1,2,5,4,3,6]   1st itterration this is the out come.
// [1,2,4,5,3,6]

// In which case does bubble sort works in the most efficient way:
// When the array is sorted in increasing order    this is correct.
// When the array is sorted partially
// When the array is sorted in decreasing order.
// When the array is nearly sorted.

// Sort the array in descending order using Bubble Sort.
// number : 6
// array  : -9 8 43 23 -8 50

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     bool flag= false;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=n-1;j>=1+i;j--){
//             if(arr[j]>arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//                 flag=true;
//             }
//         }
//         if(flag==false) {
//             cout<<"array is sorted";
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// selection and insertion sort
//selection sort

//unstable sorting
//time complexity O(nsquare)
//space complexity O(1)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         int min=INT_MAX;
//         int midx=-1;
//         for(int j=i;j<n;j++){
//             if(arr[j]<min){
//                 min=arr[j];
//                 midx=j;
//             }
//         }
//         swap(arr[i],arr[midx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     for(int ele : arr){
//         cout<<ele;
//     }
    
// }

//insertion sorting

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>=1){
//             if(arr[j]>=arr[j-1]) break;
//             else{
//                 swap(arr[j],arr[j-1]);
//                 j--;
//             }
//         }
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int ele : arr){
//             cout<<ele;
//         }
// }

// Which of the following is true about selection sort:
// a) In each iteration we find the minimum element in the unsorted part of the array.            
// b) In each iteration we find the index of the minimum element in the unsorted part of the array. yes
// c) We swap the index of the minimum element with the first element of the array.   
// d) It takes O(n^2) swaps. 


// Which of the following examples represent the worst case input for an insertion sort?
// a) array in sorted order
// b) large array
// c) normal unsorted array 
// d) array sorted in reverse order- this one 


// How many passes would be required during insertion sort to sort an array of 5 elements?
// a) 1
// b) Depends on order of elements  
// c) 4 -yes 
// d) 5


// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>=1){
//             if(arr[j]>=arr[j-1]) break;
//             else{
//                 swap(arr[j],arr[j-1]);
//                 j--;
//             }
//         }
        
//     }
    
//     int x=0;
//     for(int i=0;i<n;i++){
//         x*=10;
//         x+=arr[i];
//     }
//     for(int i=n-2;i>0;i--){
//         if(arr[i]!=arr[i+1]){
//            swap(arr[i],arr[i+1]);
//             break; 
//         }  
//     }
    
//     int y=0;
//     for(int i=0;i<n;i++){
//         y*=10;
//         y+=arr[i];
//     }
//    cout<<"the minimum sum is"<<x+y;
// }


// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

// #include<iostream>
// using namespace std;
// int main(){
//     string s[7]={"krishna","pravena","susu","vasu","resh","niru","padma"};
//     for(int i=0;i<7-1;i++){
//         bool flag=false;
//         for(int j=0;j<=7-1-i;j++){
//           if(s[j]>s[j+1]){
//             swap(s[j],s[j+1]);
//             flag=true;
//           }
//         }
//         if(flag==false) break;
//     }
//     for(string ele:s){
//         cout<<ele<<endl;
//     }
// }
