// 1.Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4


    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int rows;
    //     cin>>rows;
    //     for(int i=1;i<=rows;i++){
    //         for(int j=1;j<=rows;j++){
    //             cout<<j;
    //         }
    //       cout<<endl;
    //     }
    // }

// 2.Print the following pattern
        // Input: n = 4
        // Output:
        // 1 2 3 4
        // 1 2 3
        // 1 2
        // 1
          

        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int rows;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         for(int j=1;j<=(rows+1-i);j++){
        //             cout<<j;
        //         }
        //         cout<<endl;
        //     }
        // }

// 3.Print the following pattern
        // Input: n = 4
        // Output:
        // A
        // A B
        // A B C
        // A B C D 


        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int rows,n;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         n=65;
        //         for(int j=1;j<=i;j++){
        //           cout<<(char)n;
        //           n+=1;
        //         }
        //         cout<<endl;
        //     }
        // }

// 4.Print the following pattern
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
        //     int rows,n;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         n=65;
        //         for(int j=1;j<=i;j++){
        //             if(i%2==0){
        //               cout<<(char)n;
        //               n+=1;
        //             }
        //             else{
        //                 cout<<j;
        //             }
        //         }
        //         cout<<endl;
        //     }
        // }

// 5.Print the following pattern
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
        //    int rows;
        //    cin>>rows;
        //    for(int i=1;i<=rows;i++){
        //     for(int j=1;j<=i;j++){
        //         cout<<"*";
        //     }
        //     cout<<endl;
        //    }
        //    for(int i=1;i<=rows;i++){
        //     for(int k=1;k<=rows+1-i;k++){
        //          cout<<"*";
        //     }
        //     cout<<endl;
        //    }
        // }

// 6.Print the following pattern
    //    Sample Input : m = 4, n = 6
    //    Sample Output :
    //    ******
    //    *    *
    //    *    *
    //    ******


        //    #include<iostream>
        //    using namespace std;
        //    int main(){
        //     int m,n;
        //     cout<<"m=";
        //     cin>>m;
        //     cout<<"n=";
        //     cin>>n;
        //     for(int i=1;i<=m;i++){
        //         for(int j=1;j<=n;j++){
        //             if( j==n || i==m||j==1||i==1) cout<<"*";
        //             else cout<<" ";
        //         }
        //        cout<<endl;
        //     }
        //    }

// 7.Print the following pattern
        // Sample Input : n = 4
        // Output :
        //    ****
        //   ****
        //  ****
        // ****


        // #include<iostream>
        // using namespace std;
        // int main(){
        //         int rows;
        //         cin>>rows;
        //         for(int i=1;i<=rows;i++){
        //                 for(int j=1;j<=rows-i;j++){
        //                         cout<<" ";
        //                 }
        //                 for(int k=1;k<=i;k++){
        //                         cout<<"*";
        //                 }
        //                 for(int l=1;l<=rows-i;l++){
        //                         cout<<"*";
        //                 }
        //                 cout<<endl;
        //         }    
        // }
        
// 8.Print the following pattern
        // Sample Input : n= 4
        // Output :
        // 1
        // 1 2
        // 1 2 3
        // 1 2 3 4


        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int rows;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         for(int j=1;j<=i;j++){
        //           cout<<j;
        //         }
        //         cout<<endl;
        //     }
        // }

// 9.Print the following pattern
// Input : n = 4
// Output :
//       A
//     A B
//   A B C
// A B C D 


        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int rows,n;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         n=65;
        //         for(int j=1;j<=(rows-i);j++){
        //             cout<<" ";
        //         }
        //         for(int k=1;k<=i;k++){
        //             cout<<(char)n;
        //             n+=1;
        //         }
        //         cout<<endl;
        //     }
        // }
// 10.Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1 


        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int rows;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         int k=i;
        //         for(int j=1;j<=i;j++){
        //           cout<<k;
        //           k-=1;
        //         }
        //         cout<<endl;
        //     }
        // }

// 11.Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *


        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int rows;
        //     cin>>rows;
        //     for(int i=1;i<=rows;i++){
        //         for(int j=1;j<=rows-i;j++){
        //             cout<<" ";
        //         }
        //         for(int k=1;k<=i;k++){
        //             cout<<"*";
        //         }
        //         cout<<endl;
        //     }
        //     for(int i=1;i<=rows;i++){
        //         for(int j=1;j<=i;j++){ //bottom triangle don't need again print last line again so here i+1 spaces  
        //             cout<<" ";
        //         }
        //         for(int k=1;k<=rows-i;k++){  //here autuval row+1-i,we dont want last line so, remove +1;
        //             cout<<"*";
        //         }
        //         cout<<endl;
        //     }
        // }
