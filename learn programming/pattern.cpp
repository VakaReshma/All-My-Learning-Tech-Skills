// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }
// Print the following pattern
// *
// * *
// * * *
// * * * *
// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
//   } 
// }
//Print the following pattern
// * * * *
// * * *
// * * 
// * 

// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
//   } 
// }
//Print the following pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   } 
// }

// Print the following pattern
// 1
// 1 3
// 1 3 5
// 1 3 5 7
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n*i-1;j+=2){
//      cout<<j<<" ";
      
//     }
//     cout<<endl;
//   }
// }

//Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//    int a=65;
//    for(int j=1;j<=i;j++){
//     cout<<(char)a;
//     a=a+1;
//    }
//     cout<<endl;
//   }
// }
// // print the given pattern
//     * 
//     *
// * * * * *
//     * 
//     * 

// #include<iostream>
// using namespace std;
// int main()
// {
//  int n,mid;
//  cin>>n;
//  mid=n/2+1;
//  for(int i=1;i<=n;i++){
//     for(int k=1;k<=n;k++){
//         if(i==mid || k==mid ) cout<<"*"<<" ";
//         else cout<<" "<<" ";
//     }
//     cout<<endl;
//  }
// }



// print the given pattern
// *        *
//   *    *
//     * 
//   *   *
// *       *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j||i+j==n+1)cout<<"*"<<" ";
//             else cout<<" "<<" ";
//         }
//         cout<<endl;
//     }
// }

//print the following pattern
// 1
// 2 3
// 4 5 6
// 7 8 9

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int a=1;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//        cout<<a<<" ";
//        a+=1;
//     }
//     cout<<endl;

//   }
// }

// Print the following pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
   
//    for(int j=1;j<=i;j++){
//    if((i+j)%2!=0) cout<<"1"<<" ";
//    else if(i==j) cout<<"1"<<" ";
//    else cout<<"0"<<" ";
//    }
//     cout<<endl;
//   }
//  }
// Print the following pattern
//       *
//     * *
//   * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
 
//home work

// Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }
// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   } 
// }

// Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a=65;
//         for(int j=1;j<=i;j++){
//           cout<<(char)a<<" ";
//           a+=1;
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Input: n = 4
// Output:
// 1

// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a=65;
//         for(int j=1;j<=i+1;j++){
//             if(i%2!=0) cout<<(char)a<<" ";
//             else cout<<j<<" ";
//             a+=1;
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||i==n ||j==1||j==n) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Sample Input : n = 4
// Output :
// ****
// ****
// ****
// ****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// Print the following pattern
// n=5
//     *****
//    *****
//   *****
//  *****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//     for(int m=1;m<=n;m++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }
// Print the following pattern
// n=5
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//       cout<<" "<<" ";
//     }
//     for(int k=1;k<=i;k++){
//       cout<<"*"<<" ";
//     }
//     for(int m=1;m<=i-1;m++){
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }
// }

// Print the following pattern
// n=5
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//       cout<<" "<<" ";
//     }
//     for(int k=1;k<=i;k++){
//       cout<<k<<" ";
//     }
//     for(int m=i-1;m>0;m--){
//       cout<<m<<" ";
//     }
//     cout<<endl;
//   }
// }
// Print the following pattern
// n=5       
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//                 cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n-1;i++){
//        for(int j=1;j<=i;j++){
//         cout<<" "<<" ";
//        }
//        for(int k=1;k<=((n-i)*2)-1;k++){
//         cout<<"*"<<" ";
//        }
//        cout<<endl;
//     }
// }

// Print the following pattern
// n=4
// *********
// **** ****
// ***   ***
// **     **
// *       *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int y=1;y<=2*(n+1)-1;y++){
//         cout<<"*";
//     }
//     cout<<endl;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i)+1;j++){
//             cout<<"*";
//         }
//         for(int k=1;k<=(2*i)-1;k++){
//             cout<<" ";
//         }
//         for(int l=1;l<=(n-i)+1;l++){
//          cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// Print the following pattern
// n=4
// 1111111
// 1222221
// 1233321
// 1234321
// 1233321
// 1222221
// 1111111
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n*2-1;i++){
//         for(int j=1;j<=2*n-1;j++){
//             int a=i;
//             int b=j;
//             if(a>n) a=2*n-i;
//             if(b>n) b=2*n-j;
//             cout<<min(a,b);
//         }
//         cout<<endl;
//     }
// }
//print the following pattern
//n=4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n*2-1;i++){
//         for(int j=1;j<=2*n-1;j++){
//             int a=i;
//             int b=j;
//             if(a>n) a=2*n-i;
//             if(b>n) b=2*n-j;
//             int x=min(a,b);
//             cout<<n-x+1;
//         }
//         cout<<endl;
//     }
// }

// Input: n = 5
// Output:
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//     for(int k=1;k<=2*i-1;k++){
//       cout<<k;
//     }
    
//     cout<<endl;
//   }
// }

// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     int a=65;
//     for(int j=1;j<=n-i;j++){
//       cout<<" "<<" ";
//     }
//     for(int k=1;k<=i;k++){
//       cout<<(char)a<<" ";
//       a++;
//     }
//     for(int m=1;m<=i-1;m++){
//       cout<<char(a)<<" ";
//       a++;
//     }
//     cout<<endl;
//   }
// }

// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//       cout<<" "<<" ";
//     }
//     for(int j=1;j<=i;j++){      
//       cout<<(char)(j+'A'-1)<<" ";
//     }
//     for(int j=i-1;j>0;j--){      
//       cout<<(char)(j+'A'-1)<<" ";
//     }
//     cout<<endl;
//   }
// }

// Print the following pattern

// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=65;
//     for(int y=1;y<=2*(n+1)-1;y++){
//         cout<<(char)a<<" ";
//         a++;
//     }
//     cout<<endl;
//     for(int i=1;i<=n;i++){
//         int p=65;
//         for(int j=1;j<=(n-i)+1;j++){
//             cout<<(char)p<<" ";
//              p++;
//         }
//         for(int k=1;k<=(2*i)-1;k++){
//             cout<<" "<<" ";
//             p++;
//         }
//         for(int l=1;l<=(n-i)+1;l++){
//          cout<<(char)p<<" ";
//          p++;
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
//     for(int i=n-1;i>0;i--){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<n-i+1;j++){
//             cout<<j<<" ";
//         }
//         for(int k=1;k<=(2*i)-1;k++){
//              cout<<" "<<" ";
//         }
//         for(int p=n-i;p>0;p--){
//             cout<<p<<" ";
//         }
//         cout<<endl;
//     }
// }

// Print the following pattern
// Input : n = 5
// Output:
// *        *
//  *      *
//   *    *
//    *  *
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<i;j++)cout<<" ";
//             cout<<"* ";
//         for(int j=1;j<2*(n-i);j++)cout<<"-";
//         cout<<"*";
//         cout<<endl;
//     }
// }
