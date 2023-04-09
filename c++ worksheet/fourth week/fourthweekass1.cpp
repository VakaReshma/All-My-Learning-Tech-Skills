// functions

// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function


// #include<iostream>
// using namespace std;
// int sqare_Numbers(int n){
//     int ans;
//     for(int i=1;i<=n;i++){
//         ans=1;
//         for(int j=1;j<=2;j++){
//              ans*=i;
//         }
//         cout<<ans;
//         cout<<endl;
//     }  
// }
// int main(){
//     int number;
//     cin>>number;
//     sqare_Numbers(number);
// }

// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.


// #include<iostream>
// using namespace std;
// int area(int a){
//     float area_Of_circle;
//     float pi=3.14;
//     area_Of_circle=pi*a*a;
//     cout<<area_Of_circle;
// }
// int main(){
//     int radius;
//     cin>>radius;
//     area(radius);
// }


// Q3: Given two numbers a and b, write a function to print all odd numbers between them


// #include<iostream>
// using namespace std;
// int odd_in_Range(int t,int r){
//     for(int i=t;i<=r;i++){
//         if(i%2==0);
//         else cout<<i<<endl;
//     }

// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     odd_in_Range(a,b);
// }

// Q4: Write a function to count the number of digits in a number and then print the square of this number

// #include<iostream>
// using namespace std;
// int cout_No_of_digits(int n){
//     int rem,count=0;
//     int num=n;
//     while(n>0){
//     rem=n%10;
//     count++;
//     n=n/10;
//     }
//     cout<<count<<endl;
//     cout<<num*num;
// }
// int main(){
//     int number;
//     cin>>number;
//     cout_No_of_digits(number);
// }

// Q5: The minimum number of functions present in any C++ program is:
// 0
// 1
// 2
// ANS:Infinite

// Q6: State True and False:
// A function may be called more than once from any other function   :true
// It is necessary for a function to return some value.              :false


// Q7: Explore:
// Can the same function name be used for different functions without any conflict?
//   answer: if the parameters are different means ,not get any confilts