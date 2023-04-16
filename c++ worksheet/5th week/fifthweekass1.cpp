// 1.Calculate the product of all the elements in the given array


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a[n],product=1;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//        product= (product * a[i]);
//     }
//     cout<<product;
// }

// 2.Find the second largest element in the given Array in one pass. 


// #include<iostream>
// using namespace std;
// int main(){
//     int n,smax,max;
//     cin>>n;
//     int arr[n];
//     int INT_MIN=arr[0];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     smax=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(smax<arr[i] && (max!= arr[i])) smax=arr[i];
//     }
//     cout<<smax;  
// }

// 3.Find the minimum value out of all elements in the array.


// #include<iostream>
// using namespace std;
// int main(){
//     int n,min;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     min=arr[0];
//     for(int i=0;i<n;i++){
//         if(min>arr[i]) min=arr[i];
//     }
//     cout<<min;   
// }

// 4.Given an array, predict if the array contains duplicates or not.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int flag=false;
//     for(int i=0;i<n;i++){ 
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]) flag=true;
//         } 
//     }
//         if(flag==true) cout<<"duplicates are present in the array";
//         else cout<<"no duplicates";
// }

// 5.WAP to find the smallest missing positive element in the sorted Array that contains only 
// positive elements


// 6.Predict the output.

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

// output: 49