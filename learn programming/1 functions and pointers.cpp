// take a,b,cas input and prit the following pattern:
// a=3,b=4,c=8
// *
// **
// ***
// *
// **
// ***
// ****
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// #include<iostream>
// using namespace std;
// void pattren(int x){
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int a=3;
//     int b=4;
//     int c=8;
//     pattren(a);
//     pattren(b);
//     pattren(c);  
// }

//write a program sum of digits using funtions

// #include<iostream>
// using namespace std;
// int sum(int A,int B){
//     cout<<A+B;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     sum(a,b);
// }

//write a program for minimum of the  given digits using function;

// #include<iostream>
// using namespace std;
// int min(int d, int g){
//     if(d>g) cout<<g;
//     else cout<<d;
// }
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     min(a,b);
// }
// combination and permitations 
//n fact,r fact, n-r fact;

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int fac=1;
//     for(int i=1;i<=x;i++){
//         fac*=i;
//     }
//    cout<<fac<<endl;
// }
// int combination(int n,int r){
//     int com;
//     com=fact(n)/(fact(r)*fact(n-r));
//     cout<<com;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     combination(n,r);
// }

 //write a function to compute the gratest common divisor of two given numbers

// gretest of the tree numbers
// #include<iostream>
// using namespace std;
// void gratest(int a,int b,int c){
//     if(a>b && a>c) cout<<a;
//     else if(b>a && b>c) cout<<b;
//     else cout<<c;

// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     gratest(a,b,c);
// }

//swap elements
// #include<iostream>
// using namespace std;
// int swap(int r,int t) {
//     int temp;
//     temp=r;
//     r=t;
//     t=temp;
//     cout<<r<<" "<<t;
// }
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     swap(a,b);
// }

//home work
// Write a function to print squares of first n natural numbers, taking n as argument to the function

// #include<iostream>
// using namespace std;
// squareofnumber(int x){
//     for(int i=1;i<=x;i++){
//         cout<<i*i<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     squareofnumber(n);
// }

// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

// #include<iostream>
// using namespace std;
// int radious(int y ,float z){
//     int r;
//     r=y/2*z;
//    cout<<r;
// }
// int main(){
//     int c;
//     cin>>c;
//     float pi=3.14;
//     radious(c,pi);
// }

// Q3: Given two numbers a and b, write a function to print all odd numbers between them.
// #include<iostream>
// using namespace std;
// oddnumbers(int x, int y){
//     if(x%2==0 && y%2==0) cout<<x<<y;
//     else if(x%2==0) cout<<y;
//     else cout<<x;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     oddnumbers(a,b);
// }

// Q4: Write a function to count the number of digits in a number and then print the square of this number.

// #include<iostream>
// using namespace std;
// squareofn(int p){
//     cout<<p*p;
// }
// digitscount(int a){
//  int rem,count=0;
//  while(a>0){
//   rem=a%10;
//   count++;
//   a/=10; 
// }
// squareofn(count);
// }
// int main(){
//     int n;
//     cin>>n;
//     digitscount(n); 
// }

// Q5: The minimum number of functions present in any C++ program is:
// 0
// 1
// 2

// output: 1

// Write a progam sum of two numbers using pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int *p1=&a,*p2=&b;
//     cout<<*p1+*p2;
// }
//using referance swap the elements

// #include<iostream>
// using namespace std;
// int swap(int* r,int *t) {
//     int temp;
//     temp=*r;
//     *r=*t;
//     *t=temp;
//     cout<<*r<<" "<<*t;
// }
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     swap(&a,&b);
// }
//null pointer
//double pointer-adress of another pointer
//

// home work 

//  Write a program to find the product of two numbers using pointers.

//  #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int *p1=&a,*p2=&b;
//     cout<<*p1**p2;
// }
// Q2 : int *p, q;
// p is a pointer and q is an integer.
// p and q both are pointers.
// P and q both are integers.

// ans:p is a pointer and q is an integer.

// Syntax is incorrect.
// Q3: Find the output of the following code snippet.
// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
// 11 11 10
// 10 10 10
// 11 10 11
// 10 11 10

 //ans 11 10 11

// Q4: Find the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;
// ptr now points to b
// ptr2 now points to a
// a gets value of b
// b gets value of a

//ans:a gets value of b

// Q5: Is the following program snippet correct?

// int a = 10, b = 20;
// int *ptr;
// *ptr = 5;
// ans run time error