
//array syntax

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={1,4,3,6,7,9,45,23};
//     cout<<arr[5];
// }

//write a program for array taking input form user

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//given an array of marks of students if the mark of nay student is less than 35
//print its roll number.[roll number here refers to the index of the array.]
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[7];
   
//    for(int i=0;i<7;i++){
//     cin>>arr[i];
//    } 
//    for(int i=0;i<7;i++){
//       if(arr[i]<35) {
//          cout<<i<<" ";
//        }
//    }
// }

// sum of the array

// #include<iostream>
// using namespace std;
// int main(){
//    int n,sum=0;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       sum+=arr[i];
//    }
//    cout<<sum;
// }

// find the element X in the array.Take x as an input

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
// int x;
//    cin>>n>>x;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       if(x==arr[i]) cout<<x;
//    }
// }

//find the maximum eleement in an array
// #include<iostream>
// using namespace std;
// int main(){
//    int n,max;
//    cin>>n;
//    int arr[n];
//    max=arr[0];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=1;i<n;i++){
//       if(max<arr[i]) {
//          max=arr[i];
//       }
//    }
//    cout<<max;
// }
//find the second largest number in an array
// #include<iostream>
// using namespace std;
// int main(){
//    int n,max,smax;
//    cin>>n;
//    int arr[n]; 
//    smax=-1;
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    max=arr[0];
//    for(int i=1;i<n;i++){
//       if(max<arr[i]) {
//        smax=max;
//          max=arr[i];
//       }
//    }
//     cout<<smax;
// }

//home work

// Calculate the product of all the elements in the given array.

// #include<iostream>
// using namespace std;
// int main(){
//    int n,product=1;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//     product= product*arr[i];
//    }
//    cout<<product;
// }

// Find the second largest element in the given Array in one pass.

// #include<iostream>
// using namespace std;
// int main(){
//    int n,max,smax;
//    cin>>n;
//    int arr[n]; 
//    smax=-1;
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    max=arr[0];
//    for(int i=1;i<n;i++){
//       if(max<arr[i]) {
//        smax=max;
//          max=arr[i];
//       }
//    }
//     cout<<smax;
// }

// Find the minimum value out of all elements in the array.

// #include<iostream>
// using namespace std;
// int main(){
//    int n,min;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//     min=arr[0];
//    for(int i=1;i<n;i++){
//       if(min>arr[i]) {
//          min=arr[i];      
//       }
//    }
//    cout<<min;
// }

// Given an array, predict if the array contains duplicates or not.

// #include<iostream>
// using namespace std;
// int main(){
//    int n,flag=false;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]) flag= true;
//       }
//    }
//    if(flag == true) cout<<"duplicates are present in array";
//    else cout<<" no duplicates present in an array";
// }


// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.

// Predict the output.
// int main()
// {
// int sub[50], i ;
// for ( i = 0 ; i <= 48 ; i++ ) ;
// {
// sub[i] = i ;
// cout<<sub[i]<<endl ;
// }
// return 0;
// }

//output: 49

//array second week
//array passing through function

// #include<iostream>
// using namespace std;
// display(int a[]){
//     for(int i=0;i<4;i++){
//         cout<<a[i];
//     }
// }
// int main(){
//     int arr[]={1,2,3,4};
//     display(arr);
// }

//array using pointer

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int *ptr=arr;
//      for(int i=0;i<4;i++){
//         cout<<ptr[i];     
//      }
// }

//vector array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//  vector<int> v;
//  v.push_back(2);
//  v.push_back(5);
//  v.push_back(6);
//  v.push_back(8);
//  cout<<v[0];
//  cout<<v[1];
// cout<<v[2];
// cout<<v[3];
// }

//find the last occreance of x in an array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//       v.push_back(q);
//     }
//     // for(int i=v.size()-1;i>0;i--){
//     //     if(v[i]==k) cout<<i;
//     // }
// }

//find the doublet in th earray whole sum is equal to the viven value x

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   int x;
//   cin>>x;
//   int n;
//   cin>>n;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//   for(int i=0;i<=v.size()-1;i++){
//     for(int j=i+1;j<=v.size()-1;j++){
//       if(v[i]+v[j]==x){
//         cout<<"("<<i<<","<<j<<")";
//       }
//     }
//   }
// }

//write a program to copy the content of one array into another in the reverse order

// #include<iostream>
// #include<vector>
// using namespace std;
// int display(vector<int>& a){
//   for(int i=0;i<a.size();i++){
//     cout<<a[i]<<" ";
//   }
// }
// int reverse(vector<int>& v){
//     for(int i=0,j=v.size()-1;i<=j;j--,i++){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//     }
//     display(v);
    
// }

//  int main(){
//   int n;
//   cin>>n;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//   display(v);
//   reverse(v);
// }

// rotate the given array 'a' by k steps, where k is non-negative

// #include<iostream>
// #include<vector>
// using namespace std;
// int display(vector<int>& a){
//   for(int i=0;i<a.size();i++){
//     cout<<a[i]<<" ";
//   }
// }
// void reversepart(int i,int j,vector<int>& v){
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     return;
    
// }

//  int main(){
//   int n,k;
//   cin>>n>>k;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
// int m=v.size();
//   reversepart(0,m-k-1,v);
//   reversepart(n-k,m-1,v);
//   reversepart(0,m-1,v);
  
//   display(v);

// }
// home work

// Count the number of elements strictly greater than x.

// #include<iostream>
// #include<vector>
// using namespace std;
// int display(vector<int>& v){
//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
// }
// int countnarray(vector<int>& arr,int m){
//   int count=0;
//   for(int i=0;i<arr.size();i++){
//     // cout<<arr[i];
//     count++;
//   }
//   if(arr.size()>m) cout<<"this array is strictly grater than x elements in an array ";
//   else cout<<"condition not satisfies";
// }
// int main(){
//   int x;
//   cin>>x;
//   vector<int> m;
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//      int q;
//      cin>>q;
//      m.push_back(q);
//   }
//   display(m);
//   countnarray(m,x);
// }

// WAP to find the largest three elements in the array.

// #include<iostream>
// #include<vector>
// using namespace std;
// void largestele(vector<int>& arr){
//   int first=arr[0],second=0,third=-1;
//   for(int i=1;i<arr.size();i++){
//     if(arr[i]>first){
//       third=second;
//       second=first;
//       first=arr[i];
//    }
//    else if(arr[i]>second){
//     third=second;
//       second=arr[i];
//    }
//    else if( arr[i]>third){
//        third=arr[i];
//    }
//   }
//   cout<<first<<second<<third;
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//   largestele(v);
// }

// Check if the given array is sorted or not

// #include<iostream>
// #include<vector>
// using namespace std;
// void arraysortedarenot(vector<int> m){
//   int flag=true;
//   for(int i=1;i<m.size();i++){
//     if(m[i-1]>m[i]) flag=false;
//   }
//   if(flag==true) cout<<"array is sorted";
//   else cout<<"array is not sorted";
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> arr;
//   for(int i=1;i<n;i++){
//     int q;
//     cin>>q;
//    arr.push_back(q);
//   }
//   arraysortedarenot(arr);
// }

// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

// #include<iostream>
// #include<vector>
// using namespace std;
// int Even_odd_sumIndices(vector<int>& arr){
//   int esum=0,osum=0;
//   for(int i=0;i<=arr.size();i++){
//     if(i%2==0) esum+=i;
//     else osum+=i;
//   }
//   cout<<esum<<" "<<osum;
// }
// int main(){
// int n;
// cin>>n;
// vector<int> m;
// for(int i=0;i<n;i++){
//   int q;
//   cin>>q;
//   m.push_back(q);
// }
// Even_odd_sumIndices(m);
// }

// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

// #include<iostream>
// #include<vector>
// using namespace std;
// int task(vector<int>& m){
//   vector<int> a;
//   vector<int> b;
//   int h,k;
//   for(int i=0;i<m.size();i++){
//     if(i%2==0){
//       h=m[i]+10;
//       a.push_back(h);
//     }
//     else{
//       k=m[i]*2;
//       b.push_back(k);
//     }
//   }
//    for(int i=0;i<a.size();i++){
//     cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<b.size();i++){
//     cout<<b[i]<<" ";
//    }
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//   task(v);
// }

// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.

// #include<iostream>
// #include<vector>
// using namespace std;
// int Uniqe(vector<int>& arr){
//   for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//       if(arr[i]==arr[j]) {
//         cout<<arr[j]<<" ";
//       }
//     }
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//   Uniqe(v);
// }

// If an array arr contains n elements, then check if the given array is a palindrome or not.

// #include<iostream>
// #include<vector>
// using namespace std;
// int palindrome(vector<int>& m,int n){
//   for(int i=0;i<n;i++){
//     if(m[i]!=m[n-1-i]){
//       cout<<"not polindrame";
//       break;
//     }
//   }
//   cout<<"polindame";
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//  palindrome(v,n);
// }

// Find the error.
// double getAverage(int arr[], int size);
// int main () {
// int balance[5] = {1000, 2, 3, 17, 50};
// double avg;
// avg = getAverage( balance[0], 5 ) ;
// cout << "Average value is: " << avg << endl;
// return 0;
// }

//day-3

// sort an array 0's and arrays

// #include<iostream>
// #include<vector>
// #include <algorithm> 
// using namespace std;
// int main(){
//     int n;
// cin>>n;
// vector<int> v;
//    for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//      v.push_back(q);
//    }
//    cout<<endl;
// sort(v.begin(),v.end());
//     for(int j=0;j<n;j++){
//      cout<<v[j];
//     }
// }
//ques move all negitive numbers to begin and positive to end with constant extra spaces
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void method2(int i,int j,vector<int>& v){
//     while(i<=j){
//         if(v[i]>0 && v[j]<0){
//          int temp=v[i];
//            v[i]=v[j];
//            v[j]=temp;
//         }
//         else if(v[i]<0) i++;
//         else if(v[j]>0) j--;
//     }
//    return;
// }
// int main(){
// int n;
// cin>>n;
// vector<int> v;
//    for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//       v.push_back(q);
//    }
// method2(0,n-1,v);
// // sort(v.begin)
//  for(int m=0;m<v.size();m++){
//     cout<<v[m];
//     }
// }

//sort an array 0's,1's,2's
// #include<iostream>
// #include<vector>
// using namespace std;
// void sorting1s_2s_0s(int i, int j,vector<int>& v){
// int noz=0;
// int noo=0;
// int notw=0;
// for(int i=0;i<v.size();i++){
//     if(v[i]==0) noz++;
//     else if(v[i]==1) noo++;
//     else if(v[i]==2) notw++;
// }
// for(int i=0;i<v.size();i++){
//     if(i<noz ) v[i]=0;
//     else if(i<(noz+noo)) v[i]=1;
//     else  v[i]=2;
// }
//   return; 
// }

// int main(){
// int n;
// cin>>n;
// vector<int> v;
// for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
// }
// sorting1s_2s_0s(0,n-1,v);
//  for(int m=0;m<v.size();m++){
//     cout<<v[m];
//     }

// }
//sort the numbers in 0's 1's and 2's butach algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// void dutch_algorithm(vector<int>& a){
//     int low=0;
//     int mid=0;
//     int high=a.size()-1;
    
//     while(mid<=high){
//       if(a[mid]==2){
//         a[mid]=a[high];
//         a[high]=2;
//         high--;
//       }
//       else if(a[mid]==0){
//        int  temp=a[mid];
//         a[mid]=a[low];
//         a[low]=temp;
//         mid++;
//         low++;
//       }
//       else mid++;
//     }
//     return;
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
//     dutch_algorithm(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }
// }

//marge two sorted array;
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void marge_two_sorted_array(vector<int>& v,vector<int>& p){
  
//   int i=0;
//   int j=0;
//    int n=v.size();
//    int w=p.size();
//     vector<int> x;
//     while(i<=n && j<=w){
//       if(v[i]<p[j]){
//         x.push_back(v[i]);
//         i++;
//       }
//       else if(p[j]<v[i]){
//         x.push_back(p[j]);
//         j++;
//       }
//     }
//   x.pop_back();
//   if(i==n+1){
//     while(j<=w){
//       x.push_back(p[j]);
//       j++;
//     } 
//   }
//   else if(j==w+1){
//     while(i<=n){
//     x.push_back(v[i]);
//     i++;
//    }
//  }
//  x.pop_back();
//   for(int i=0;i<x.size();i++){
//     cout<<x[i]<<" ";
//   }
// }
// int main(){
//   int n,m;
//   cin>>n>>m;
//   vector<int>v;
//   vector<int>w;

//   for(int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//   }
//  for(int i=0;i<m;i++){
//     int r;
//     cin>>r;
//     w.push_back(r);
//   }
//   // sort(v.begin(),v.end());
//   // for(int i=0;i<v.size();i++){
//   //   cout<<v[i];
//   // }
//   // cout<<endl;
//   sort(w.begin(),w.end());
//   // for(int i=0;i<w.size();i++){
//   //   cout<<w[i];
//   // }
//   // cout<<endl;
//   marge_two_sorted_array(v,w);

// }

//find the next permitations of the array
// #include<iostream>
// #include<vector>
// using namespace std;
// void reverse(vector<int>& v,int i,int j){
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
// }
// void next_permitation(vector<int>&v, int n){
// int idx=0;
//     for(int i=n-2;i>=0;i--){
        
//        if(v[i]<v[i+1]){
//          idx=i;
//           break;
//         }
//     }
//     for(int j=n-1;j>=idx;j--){
//         if(v[j]>v[idx]){
//             swap(v[j],v[idx]);
//             break;
//         }
//     }
//     reverse(v,idx+1,n-1);
   
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
//    next_permitation(v,n); 
//    for(int i=0;i<n;i++){
//     cout<<v[i];
//    }
// }

//home work

// Count the number of triplets whose sum is equal to the given value x.

// #include<iostream>
// #include<vector>
// using namespace std;
// void triplets_SumEqualsTo_x (vector<int>& m,int x){
     
//      int count=0;
//      for(int i=0;i<m.size();i++){
//         for(int j=i+1;j<m.size();j++){
//             for(int k=j+1;k<m.size();k++){
//                 if(x==m[i]+m[j]+m[k])  count++;
//             }
//         }
//      }
//     cout<<count;
// }
// int main(){
//     int n,x;
//     cin>>n>>x;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//       v.push_back(q);
//     }
// triplets_SumEqualsTo_x(v,x);
// }

// Find the factorial of a large number.

// #include<iostream>
// #include<vector>
// using namespace std;
// void factorial_large_element(int large){
//     int fact=1;
//     for(int i=1;i<=large;i++){
//         fact*=i;
//     }
//     cout<<fact;
// }
// void large_element(vector<int>& m){
//     int large;
//     for(int i=1;i<m.size();i++){
//      if(m[i-1]>m[i])   large=m[i-1];
//      else large=m[i];
//     }  
//      factorial_large_element(large);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//       v.push_back(q);
//     }
// large_element(v);
// }

// Find the first non-repeating element in the array .

// #include<iostream>
// #include<vector>
// using namespace std;
// void non_repeting_firsr_element(vector<int>& m,int n){
//    int flag=false;
//     for(int i=0;i<m.size();i++){
//         int j=0;
//         for( j=0;j<m.size();j++){
//             if(m[i]==m[j] && i!=j) break;
            
//         }
//         if(j==n){
//             cout<< m[i];
//             flag=true;
//             break;
//         }    
//     }
//     if(flag == false) cout<<"in the array non repleating values are not there";
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//       int q;
//       cin>>q;
//       v.push_back(q);
//     }
// non_repeting_firsr_element(v,n);
// }

// move all zeros in an array to last

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(v[i]!=0) {
//             swap(v[j],v[i]);
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }
// }

