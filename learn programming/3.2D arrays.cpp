
//two d array basic syntax

// #include<iostream>
// using namespace std;
// int main(){
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
// }
// }
// write a program to store roll number and marks obitained by 4 students side by side in a matrix
// 1st row is roll number
// 2nd row is marks
// 1  2  3  4
// 98 76 44 23
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//        }
//     }
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//     }
// }
// write a program to print sum of all the elements of a 2d matrix.
// sample input:
// 3 3
// 1 2 3 
// 4 5 6 
// 7 8 9
// output: 45
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int sum=0;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//        }
//     }
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         sum+=arr[i][j];
//        }
//        cout<<endl;
//     }
//     cout<<sum;
// }
// write a program to print the transe pose of the matrix entered  by th user and store it in a new matrix
//sample input:
// 3 2

// 1 2
// 3 4
// 5 6
// output:
// 1 3 5
// 2 4 6
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//        }
//     }
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cout<<arr[i][j];
//        }
//        cout<<endl;
//     }
//     int t[m][n];
//     for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//          t[i][j]=arr[j][i];
//        } 
//     }

//     for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//         cout<<t[i][j];
//        }
//        cout<<endl;
//     }
// }
// write a progtam to change the given matrix with its tanspose
// 1 2 3
// 4 5 6
// 7 8 9

//output:
// 1 4 7 
// 2 5 8
// 3 6 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//        }
//     }
//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cout<<arr[i][j];
//        }
//        cout<<endl;
//     }
   
//     for(int i=0;i<n;i++){
//        for(int j=i+1;j<m;j++){
//           int temp=arr[i][j];
//           arr[i][j]=arr[j][i];
//           arr[j][i]=temp;
//        } 
//     }

//     for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//         cout<<arr[i][j];
//        }
//        cout<<endl;
//     }
// }
// wite a program to rotate the matrix by 90 degrees clockwse.
//sample input
// 1 2 3 
// 4 5 6 
// 7 8 9
// output: 
// 7 4 1 
// 8 5 2
// 9 6 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//      cout<<"\n";
//     for(int k=0;k<n;k++){
//         int i=0;
//         int j=n-1;
//         while(i<=j){
//             int temp=arr[k][i];
//             arr[k][i]=arr[k][j];
//             arr[k][j]=temp;
//             i++;
//             j--;
//         }
//     }   
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }

//

// # home work

// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=10;
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Write a program to add two matrices and save the result in one of the given matrices.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9

// 4 5 8
// 0 0 8
// 1 2 0
// Output 1:
// 5 7 11
// 4 5 14
// 8 10 9
// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[3][3],brr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
        
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>brr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr[i][j]=arr[i][j]+brr[i][j];
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).
// Input 1:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: -4
// Input 2:
// 1 2 -3 4

// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
// Output 1: 2

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,l1,l2,r1,r2;
//     cin>>n>>m;
//     cin>>l1>>r1>>l2>>r2;
//     int sum=0;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=min(l1,l2);i<=max(l1,l2);i++){
//         for(int j=min(r1,r2);j<=max(r1,r2);j++){
//            sum+=arr[i][j];
//         }
//     }  
// cout<<sum;
// }


// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
// Input 1:
// 1 3 4 6
// 2 4 5 7
// 3 5 6 8
// 4 6 7 9
// Output 1: 9

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[4][4];
//    int max=0;
//    for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//            if(max<arr[i][j]) max=arr[i][j];
//        }
//    }
//    cout<<max;
// }

// Q5: Write a program to print the row number having the maximum sum in a given matrix.
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 2
// Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4];
//     int rmax=0;
        
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         int max=0;
//         for(int j=0;j<4;j++){
//            max+=arr[i][i];
//         }
//         if(rmax<max) rmax=i;
//     }
//     cout<<rmax;
// }

// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
// Input 1:
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0
// Output 1:
//     3
//     5
// 7 6 5 4 3
//     6
//     37

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     if(n!=m || n%2==0||m%2==0) {
//         cout<<"this array conot make that plus sysmbole";
//     }
//     else{
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>arr[i][j];
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(i==n/2 ||j==m/2){
//                     cout<<arr[i][j]<<" ";
//                }
//                else cout<<" "<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

//another part

//write a program  print the multiplication of two matrices given by the user

// r=2 c=3
// 1 2 3 
// 4 5 6 

// r=4 c=2     
// 1 2 3 4 
// 5 6 7 8
// output :
// 11 14 17 20 
// 23 30 37 44 
// 35 46 57 68 

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int p,q;
//     cin>>p>>q;
//     if(n==p){
//         int arr[m][n];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>arr[i][j];
//             }
//         }
//         int brr[p][q];
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cin>>brr[i][j];
//             }
//         }
//         int res[m][q];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 res[i][j]=0;
//                 for(int k=0;k<p;k++){
//                     res[i][j]+=arr[i][k]*brr[k][j];
//                 }
//             } 
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 cout<<res[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     else{
//         cout<<"this array cann't make any product operation";
//     }
// }

//write a program print the matrix in wave from
// input:
// 1 2 3
// 4 5 6
// 7 8 9

// output:
// 1 2 3 
// 6 5 4 
// 7 8 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//          cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j];
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j];
//             }
//             cout<<endl;
//         }
//     }  
// }

//write a program for spiral form

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
    
//     // Input matrix elements
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
        
//     }
    
//     // Spiral traversal
//     int tnc = n * m;
//     int rmin = 0;
//     int rmax = n - 1;
//     int cmin = 0;
//     int cmax = m - 1;
//     int count = 0;
    
//     while (rmin <= rmax && cmin <= cmax) {
//         // Print the first row from the remaining rows
//         for (int j = cmin; j <= cmax && count < tnc; j++) {
//             cout << arr[rmin][j] << " ";
//             count++;
//         }
//         rmin++;
        
//         // Print the last column from the remaining columns
//         for (int i = rmin; i <= rmax && count < tnc; i++) {
//             cout << arr[i][cmax] << " ";
//             count++;
//         }
//         cmax--;
        
//         // Print the last row from the remaining rows
//         for (int j = cmax; j >= cmin && count < tnc; j--) {
//             cout << arr[rmax][j] << " ";
//             count++;
//         }
//         rmax--;
        
//         // Print the first column from the remaining columns
//         for (int i = rmax; i >= rmin && count < tnc; i--) {
//             cout << arr[i][cmin] << " ";
//             count++;
//         }
//         cmin++;
//     }
    
//     return 0;
// }



//home work

// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 1   3
//   5
// 7   9

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cin>>arr[i][j];
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i==j || i+j==n-1){
//         cout<<arr[i][j];
//       }
//       else cout<<" ";
//     }
//     cout<<endl;
//   } 
// }

// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cin>>arr[i][j];
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//      int temp=arr[i][j];
//      arr[i][j]=arr[j][i];
//      arr[j][i]=temp;
//     }
//   } 
//   for(int i=n-1;i>=0;i--){
//     for(int j=0;j<n;j++){
//       cout<<arr[i][j];
//     }
//     cout<<endl;
//   }
// }

// Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output :
// 7 4 1 
// 2 5 8 
// 9 6 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];        
//         }
//     }
//     for(int j=0;j<n;j++){
//         if(j%2!=0){
//             for(int i=0;i<n;i++){
//                 cout<<arr[i][j];
//             }
//             cout<<endl;
//         }
//         else{
//             for(int i=n-1;i>=0;i--){
//                 cout<<arr[i][j];
//             }
//             cout<<endl;
//         }
//     }
// }

// write a code for spiral form 
// input:
// 1 2 3
// 4 5 6 
// 7 8 9
// output:
// 7 4 1 2 3 6 9 8 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//         }
//     }
//     int tnc=n*m;
//     int rmin=0;
//     int rmax=n-1;
//     int cmin=0;
//     int cmax=m-1;
//     int count=0;
//     while(rmin<=rmax && cmin<=cmax){
//         for(int i=rmax;i>=rmin && count<tnc;i--){
//              cout<<arr[i][cmin];
//         }
//         cmin++;
//         for(int j=cmin;j<=cmax && count<tnc;j++){
//           cout<<arr[rmin][j];
//         }
//         rmin++;
//         for(int i=rmin;i<=rmax && count<tnc;i++){
//             cout<<arr[i][cmax];
//         }
//         cmax--;
//         for(int j=cmax;j>=cmin && count<tnc;j--){
//             cout<<arr[rmax][j];
//         }
//         rmax--;
//     }
// }




// Q5. Predict the output :
// int main(){
// int a[][2] = {{1,2},{3,4}};
// int i, j;
// for (i = 0; i < 2; i++)
// for (j = 0; j < 2; j++)
// cout << a[i][j];
// return 0;
// }

//output:1 2 3 4

//third week day array learning

// print the pasical triangal of array using 2D array

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             if(j==0||j==i){
//               arr[i][j]=1;
//             }
//             else{
//              arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//            cout<< arr[i][j];
//         }
//         cout<<endl;
//     }
// }


//score after filiping matrix
// 0 0 1 1
// 1 0 1 0
// 1 1 0 0
//output: 
// 1100
// 1010
// 1100
// 1111
// 1001
// 1111

//39

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//          cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//             if(arr[i][0]==0){
//                for(int j=0;j<m;j++){
//                if(arr[i][j]==0) arr[i][j]=1;
//                else arr[i][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//          cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     for(int j=0;j<m;j++){
//         int noz=0;
//         int noo=0;
//         for(int i=0;i<n;i++){
//             if(arr[i][j]==0) noz++;
//             else noo++;
//         }
//         if(noz>noo){
//             for(int i=0;i<n;i++){
//                if(arr[i][j]==0) arr[i][j]=1;
//                else arr[i][j]=0; 
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//          cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     int sum=0;
       
//     for(int i=0;i<n;i++){
//         int x=1;
//         for(int j=m-1;j>=0;j--){
//            sum+=arr[i][j]*x;
//            x*=2;
//         } 
//     }
//     cout<<sum;
// }


// home work

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int idxi,idxj;

//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            if(arr[i][j]==0){
//             idxi=i;
//             idxj=j;
//            }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            if(i==idxi ||j==idxj){
//             arr[i][j]=0;
//             arr[j][i]=0;

//            }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }

