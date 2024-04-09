//write a code give number is even or odd
  // #include<iostream>
  // using namespace std;
  // int main(){
  //     int a;
  //     cin>>a;
  //     if(a%2==0) cout<<"even";
  //     else cout<<"odd";
  // }

//given an integer. Print the absolute value ofthet integer
  // #include<iostream>
  // using namespace std;
  // int main(){
  //     int a;
  //     cin>>a;
  //     if(a>0) cout<<a;
  //     else cout<<-a;
  // }

/*if cost price and selling price of an item is input through the keyboard , write a program to 
determine whether the seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred*/

// #include<iostream>
// using namespace std;
// int main(){
//     int sp,cp;
//     cin>>sp>>cp;
//     if(sp>cp) cout<<"profit";
//     else cout<<"loss";
// }

//write a code for given have three digit number are not;

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n>100 && n<999) cout<<"three digit number";
//     else cout<<"not three digit number";
// }

//take an number which is divisiable by both 5 and 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%5==0 && n%3==0) cout<<n<<" is divisible by both numbers";
//     else cout<<n <<"is not divisible by both numbers";

// }

//take 3 positive numbers which is gretest among them.

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>b && a>c) cout<<a;
//     else if(b>a && b>c) cout<<b;
//     else cout<<c;
// }

// Write a program to check whether a charecter is an alphabet are not 
// #include<iostream>
// using namespace std;
// int main(){
//  char c;
//  cin>>c;
//   int m=(int)c;
//  if(m>=97 && m<=122 || m>=65 && m<=90){
//   cout<<"the charater is an alphabet";
//  }
//  else{
//   cout<<"the charater is not an alphabet";
//  }
// }

// write a code for divisible by 3 and 5 not divisible by 15
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cin>>m;
//   if(m%3==0 || m%5==0 && m%5!=0) cout<<"m is divisible by both 3 and 5 and not disible 15";
//   else cout<<"m is divisible by 15";
// }

// write a program to check whether a given charactor is a vowel or a consonent

// #include<iostream>
// using namespace std;
// int main(){
//   char m;
//   cin>>m;
//   if (m=='a'||m=='A' ||m=='e'|| m=='E'||m=='i'||m=='I'||m=='o'||m=='O'||m=='u'||m=='U') cout<<"charecter is vowel";
//   else cout<<"charecter is a consonent";
// }

// Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

// Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

// #include<iostream>
// using namespace std;
// int main(){
//   int year;
//   cin>>year;
//   if(year%4==0) cout<<"this year is leap year";
//   else cout<<"not leap year";

// }
// Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cin>>a>>b;
//   int area,perimeter;
//   area=a*b;
//   perimeter=2*a*b;
//   if(area >perimeter) cout<<"yes";
//   else cout<<"no";
// }


// Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,c;
//   cin>>a>>b>>c;
//   if(a==b && b==c) cout<<"equilateral triangle";
//   else if(a==b|| b==c ||a==c) cout<<"scalene triangle";
//   else cout<<"isosceles triangle";
// }

// Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,c;
//   cin>>a>>b>>c;
//   if(a<b && a<c) cout<<"a get least score";
//   else if(b<c && b<a) cout<<"b get least score";
//   else cout<<"c get least score";
// }

// Ques : Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
// #include<iostream>
// using namespace std;
// int main(){
//   int x,y;
//   cin>>x>>y;
//   if(x==0 && y>0) cout<< "point lies on x-axies";
//   else if(x>0 &&y==0) cout<< "point lies on y-axies";
//   else cout<<"this point not in orgin axies";
// }

/*Ques : Given three points (x1, y1), (x2, y2) and 
 (x3, y3), write a program to check if all the three points fall on one straight line*/

// Ques : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

// #include<iostream>
// using namespace std;
// int main(){
//  int m;
//  cin>>m;
 
//  if(m>=97 && m<=122 || m>=65 && m<=90){
//   cout<<"the charater is an alphabet";
//  }
//  else if(m>=48 && m<=57) {
//   cout<<"the charater is number";
//  }
//  else if(m>=33 && m<=47){
//   cout<<"the charater is spcial charecter";
//  }
//  else {
//   cout<<"the charater is not in my list";
//  }
// }

//ternary operations

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cin>>a>>b;
//   (a>b) ? cout<<"true":cout<<"false";
// }

// given the markes of the student . if the markes are greater than 33 print the result as pass otherwise fail without using if els estatement
// #include<iostream>
// using namespace std;
// int main(){
//   int marks;
//   cin>>marks;
//   (marks>33)? cout<<"pass":cout<<"fail";
// }

//switch case
//write a program to input week numbers(1-7) and print day of week name using switch case.
// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cin>>a;
//   switch(a){
//     case 1:
//      cout<<"monday";
//       break;
//      case 2:
//      cout<<"thesday";
//       break;
//      case 3:
//      cout<<"wednesday";
//       break;
//      case 4:
//      cout<<"thrusday";
//       break;
//      case 5:
//      cout<<"friday";
//       break;
//      case 6:
//      cout<<"saterday";
//       break;
//      case 7:
//      cout<<"sunday";
//       break;
//       default :
//       cout<<"invalied number";
//   }
// }
//write a program to input month number and print total number of days in month using switch case.

// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cin>>a;
//   switch(a){
//     case 1:
//      cout<<"31";
//       break;
//      case 2:
//      cout<<"28";
//       break;
//      case 3:
//      cout<<"31";
//       break;
//      case 4:
//      cout<<"30";
//       break;
//      case 5:
//      cout<<"31";
//       break;
//      case 6:
//      cout<<"30";
//       break;
//      case 7:
//      cout<<"31";
//       break;
//       case 8:
//      cout<<"31";
//       break;
//      case 9:
//      cout<<"30";
//       break;
//      case 10:
//      cout<<"31";
//       break;
//       case 11:
//      cout<<"30";
//       break;
//      case 12:
//      cout<<"31";
//       break;

//       default :
//       cout<<"invalied number";
//   }
// }

// switch condition using 
// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cin>>a;
//   switch(a<=7 && a%2!=0){
//     case 1:
//     cout<<"31";
//   }
//   switch(a<=7 && a%2==0){
//     case 1:
//     cout<<"31";
//   }
//   switch(a==4 ||a==6 || a==9 ||a==1){
//     case 1:
//     cout<<"30";
//   }
//   switch(2){
//     case 1:
//     cout<<"28";
//   }

// }
//write a program to calculate that prforms basic arthmatic operations(add,subtract,multipy and divide) using swith case and functions 
//the calculate should input two numbers and an operator from user.

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   char ch;
//    cin>>a>>ch>>b;
//    switch (ch)
//    {
//    case '+':
//     cout<<a+b;
//     break;
//     case '-':
//       cout<<a-b;
//     break;
//     case '*':
//    cout<<a*b;
//     break;
//   case '/':
//    cout<<a/b;
//     break;   
//    default:
//    cout<<"not in list u given input";
//     break;
//    }
// }

//home work

// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
// Output1 : notes of “500” = 1 and notes of “10” = 1
// #include<iostream>
// using namespace std;

// int main() {
//     int amount;
//     cin >> amount;

//     int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0;
//     int n50 = 0, n100 = 0, n200 = 0, n500 = 0;

//     switch (amount >= 500) {
//         case 1:
//             n500 += amount / 500;
//             amount -= n500 * 500;
//             break;
//     }

//     switch (amount >= 200) {
//         case 1:
//             n200 += amount / 200;
//             amount -= n200 * 200;
//             break;
//     }

//     switch (amount >= 100) {
//         case 1:
//             n100 += amount / 100;
//             amount -= n100 * 100;
//             break;
//     }

//     switch (amount >= 50) {
//         case 1:
//             n50 += amount / 50;
//             amount -= n50 * 50;
//             break;
//     }

//     switch (amount >= 20) {
//         case 1:
//             n20 += amount / 20;
//             amount -= n20 * 20;
//             break;
//     }

//     switch (amount >= 10) {
//         case 1:
//             n10 += amount / 10;
//             amount -= n10 * 10;
//             break;
//     }

//     switch (amount >= 5) {
//         case 1:
//             n5 += amount / 5;
//             amount -= n5 * 5;
//             break;
//     }

//     switch (amount >= 2) {
//         case 1:
//             n2 += amount / 2;
//             amount -= n2 * 2;
//             break;
//     }

//     switch (amount >= 1) {
//         case 1:
//             n1 += amount / 1;
//             amount -= n1;
//             break;
//     }

//     cout << "Notes of 500 = " << n500 << endl;
//     cout << "Notes of 200 = " << n200 << endl;
//     cout << "Notes of 100 = " << n100 << endl;
//     cout << "Notes of 50 = " << n50 << endl;
//     cout << "Notes of 20 = " << n20 << endl;
//     cout << "Notes of 10 = " << n10 << endl;
//     cout << "Notes of 5 = " << n5 << endl;
//     cout << "Notes of 2 = " << n2 << endl;
//     cout << "Notes of 1 = " << n1 << endl;

//     return 0;
// }

// Predict the output:
// #include<iostream>
// using namespace std;
// int main( ) {
// int a = 5, b, c ;
// b = a = 15 ;
// c = a < 15 ;
// cout << "a = " << a << ", b = " << b << " , c = "<< c ;
// return 0;
// }

//ans 15 15 0

// Predict the output:
// #include<iostream>
// using namespace std;
// int main() {
// int x = 3 ;
// float y = 3.0 ;
// if (x == y)
// cout <<"x and y are equal" ;
// else
// cout << "x and y are not equal" ;
// return 0;
// }

//x and y are equal

// predict the output:

// #include<iostream>
// using namespace std;
// int main(){
// int test = 0;
// cout << "First character " << '1' << endl;
// cout << "Second character " << (test ? 3 : '1') << endl;
// return 0;
// }

// First character 1
// Second character 49

// predict the output:
// #include <iostream>
// using namespace std;
// int main(){
// int a = 18; int b = 12;
// bool t = (a > 20 && b < 15)? true : false;
// cout <<"Value of t: " << t ;
// return 0;
// }

//Value of t: false

// predict the output:

// #include <iostream>
// using namespace std;
// int main() {
// int number = -4;
// char result;
// result = number > 0 ? 'P' : 'N';
// cout << result << endl;
// return 0;
// }

//result N

// class 2
//write a program for arthmatic proggration

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<2*n-1;i+=2){
//         cout<<i;
//     }
// }


// home work week-1

// 1.Print all the odd numbers from 1 to 100.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
// }

// 2.Print all numbers from 1 to 100 that are divisible by 3

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%3==0) cout<<i<<endl;
//     }
// }

// 3.Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=100;i++){
//         if(i%n==0) cout<<i<<endl;
//     }
// }

// 4.Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
// for(int i=4;i<=2*n-1;i+=3){
//         cout<<i;
//     }
// }



// 5.Display this GP - 3,12,48,.. upto ‘n’ terms.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=3;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ";
//         a=a*4;

//     }

// }


// 6.Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

// #include<iostream>
// using namespace std;
// int main(){
    

//     }
// }

//wap to print the given reverse number

// #include<iostream>
// using namespace std;
// int main(){
//   int n,rem=0;
//   int reverse=0;
//   cin>>n;
//   while(n>0){
//     rem= n%10;
//     reverse=reverse*10+rem;
//     n=n/10;
//   }
//    cout<<reverse;
// }

//wap to check if a number is prime ore not

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   int flag=true;
//   cin>>n;
//   for(int i=1;i<n-1;i++){
//     if(n%i==0){
//       flag=false; 
//       break;
//     }
//   }
//   if(flag==true) cout<<n<<" is a prime number";
//     else cout<<n<<" is a composite number";
// }

//wap to count the digits in the number

// #include<iostream>
// using namespace std;
// int main(){
//   int n,rem;
//   int count =0;
//   cin>>n;
//   while(n>0){
//     rem=n%10;
//     count++;
//     n=n/10;
//   }
//   cout<<count;
// }

//wap to print the sum of digits of a givien number

// #include<iostream>
// using namespace std;
// int main(){
//   int n,sum=0,rem;
//   cin>>n;
//   while(n>0){
//     rem=n%10;
//     sum+=rem;
//     n=n/10;
//   }
//   cout<<sum; 
// }

//print the sum of the series
// 1-2+3-4+5-6+7-8...etc

// #include<iostream>
// using namespace std;
// int main(){
//   int n,sum=0;
//   cin>>n;
//   for(int i=1;i<n;i++){
//    if(i%2==0) sum=sum-i;
//    else sum=sum+i;
//   }
//   cout<<sum;
// }

//print the fibinocie number

// #include<iostream>
// using namespace std;
// int main(){
//   int n,a=1,b=1,sum=0;
//   cin>>n;
//   for(int i=1;i<n;i++){
//     sum=a+b;
//     a=b;
//     b=sum;  
//   }
//   cout<<sum;
// }

//two numbers are entered through the keyboard. write a program to find the value of one number raised to the power of another.

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,sum=1;
//   cin>>a>>b;
//   for(int i=0;i<b;i++){
//   sum=sum*a;
//   }
//   cout<<sum;
// }

// Predict the output

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// while ('1' < '2')
// cout << "In while loop" << endl;
// }

// output : in while loop....countines.

// Predict the output

// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int t = 10;
// while (t /= 2) {
// cout << "Hello" << endl;
// }
// }
// output: Hello
//         Hello
//         Hello

// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// for (int x = 1; x * x <= 10; x++)
// cout << "In for loop" << endl;
// }
// output: In for loop
//         In for loop
//         In for loop


// Predict the output

// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int x = 10, y = 0 ;
// while ( x >= y ) {
// x-- ;
// y++ ;
// cout << x << " " << y << endl ;
// }
// }

// output:
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6

// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

// #include<iostream>
// using namespace std;
// int main(){
//    int n,rem,sum=0;
//    cin>>n;
//    while(n>0){
//     rem=n%10;
//     if(rem%2==0){
//       sum+=rem;
//     }
//     n/=10;
//    }
//    cout<<sum;
// }

// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

// #include<iostream>
// using namespace std;
// int main(){
//   int n,m,rem,rev=0;
//   cin>>n;
//   m=n;
//   while(n>0){
//     rem=n%10;
//     rev=rev*10+rem;
//    n/=10;
//   }
//   cout<<m+rev;
// }


// Print the factorials of first ‘n’ numbers
// Sample Input : 10

// #include<iostream>
// using namespace std;
// int main(){
//   int n,fact=1;
//   cin>>n;
// for(int i=1;i<=n;i++){
//   fact*=i;
// }
// cout<<fact;
// }

// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :
// 1 1 2 3 5 8 13 21 34 55

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int m=0,s=1,sum;
//   cout<<1;
//   for(int i=1;i<n;i++){
//     sum=m+s;
//     cout<<sum<<" ";
//     m=s;
//     s=sum;
//   }
// }

// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// 1
// 153

// 370
// 371
// 407
#include<iostream>
using namespace std;
int main(){
  int n,rem1,rem2,rem3,ams;
  cin>>n;
  for(int i=1;i<=n;i++){
    

}