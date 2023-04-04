// 1)   #include <bits/stdc++.h>
//      using namespace std;
//      int main() {
//      while ('1' < '2')
//      cout << "In while loop" << endl;
//     }

//   sol: infinte loop , beacase in conditon the give with string format it convers into AsCI values.
//        it's countinues true conditon and in some computers sugmentation fault


// 2.    Predict the output
        //    #include <bits/stdc++.h>
        //    using namespace std;
        //    int main( ) {
        //    int t = 10;
        //    while (t /= 2) {
        //    cout << "Hello" << endl;
        //     }
        //   }
        

    //output:
        // Hello
        // Hello
        // Hello

// 3.Predict the output
        // #include <bits/stdc++.h>
        // using namespace std;
        // int main( ) {
        // for (int x = 1; x * x <= 10; x++)
        //  cout << "In for loop" << endl;
        // }


    // output:
    //    In for loop
    //    In for loop
    //    In for loop 

// 4.Predict the output
    //    #include <bits/stdc++.h>
    //    using namespace std;
    //    int main( ) {
    //    int x = 10, y = 0 ;
    //    while ( x >= y ) {
    //     x-- ;
    //     y++ ;
    //    cout << x << " " << y << endl ;
    //    }
    //    }


    // output:9 1
    //    8 2
    //    7 3
    //    6 4
    //    5 5
    //    4 6

// 5)    WAP to print the sum of all the even digits of a given number.
//       Sample Input : 4556
//       Output: 10


        // #include<iostream>
        // using namespace std;
        // int main(){
        // int number,rem,sum=0;
        // cin>> number; 
        // while(number>0){
        // rem=number%10;
        // if(rem%2==0){
        //    sum+=rem;
        // }
        // number/=10;
        // }
        // cout<<sum;
        // }

// 6.WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]


        //  #include<iostream>
        //  using namespace std;
        //  int main(){
        //  int number,rem,rev=0,d;
        //  cin>>number;
        //   d=number;
        //   while(number>0){
        //   rem=number%10;
        //   rev=rev*10+rem;
        //   number/=10;
        //   }
        //   cout<<d+rev<<"["<<d<<"+"<<rev<<"]";
        //   }


// 7.Print the factorials of first ‘n’ numbers
    //   Sample Input : 10
    //   Output :
    //   1
    //   2
    //   6
    //   24
    //   120
    //   720
    //   5040
    //   40320
    //   362880
    //   3628800


    //     #include<iostream>
    //     using namespace std;
    //     int main(){
    //     int fact=1;
    //     for(int i=1;i<=10;i++){
    //     fact*=i;
    //     cout<<fact<<endl;
    //    }
    //    }


// 8.Print first ‘n’ fibonacci numbers.
    //    Sample Input : 10
    //    Output :
    //    1 1 2 3 5 8 13 21 34 55


    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int a=0,b=1,sum=0;
    //     cout<<b<<" ";
    //     for(int i=1;i<=10-1;i++){
    //        sum=a+b;
    //        a=b;
    //        b=sum;
    //        cout<<sum<<" ";
    //     }
    // }

// 9.Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of 
// each digit of the number is equal to the number itself, then the number is called an Armstrong 
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ) 
// Output :
// 1
// 153
// 370
// 371
// 407


        // #include <bits/stdc++.h>
        // using namespace std;
        // int main( ) {
        // for (int i = 1; i <= 500; i++) {
        // int x = 0, temp = i;
        // while (temp > 0) {
        // int m = temp % 10;
        // x += m * m * m;
        // temp /= 10;
        // }
        // if (i == x) {
        // cout << i << endl;
        // }
        // }
        // }