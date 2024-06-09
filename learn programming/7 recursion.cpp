
//recursion

//function calling itself

//example
// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return;
//     cout<<"hello reshma"<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(3);
// }

//print goodmorning 'n' no of  times. where n is user input.
 
//  #include<iostream>
//  using namespace std;
//  void fun(int n){
//     if(n==0) return;
//         cout<<"good morning"<<endl;;
//     fun(n-1);
//  }
//  int main(){
//     int n;
//     cin>>n;
//     fun(n);
//  }

// make a function which calculate the factorial of  n using recurstion

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if (n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
// }

//print n to 1

// #include<iostream>
// using namespace std;
// void n_to_1(int n){
//    if(n==0) return;
//    cout<<n<<endl;;
//    n_to_1(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     n_to_1(n);
// }

//print 1 to n

// #include<iostream>
// using namespace std;
// void print(int i, int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

//print 1 to n after recursive calling

// #include<iostream>
// using namespace std;
// void n_to_1(int n){
//    if(n==0) return;
//     n_to_1(n-1); // after changeing recurse funtion like like queue
//    cout<<n<<endl;;
  
// }
// int main(){
//     int n;
//     cin>>n;
//     n_to_1(n);
// }

// print sum from 1 to n (parameterlised)

// #include<iostream>
// using namespace std;
// void totalsumofn(int sum,int n){
//     if(n==0){
//         cout<<sum;
//         return;
//     }
//     totalsumofn(sum+n,n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     totalsumofn(0,n);
// }

// make a function which calculates a rased to the power b using recursion

// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }

//given an integer, find out the sum of its degits using recursion
// input n:12345
// output=15;

// #include<iostream>
// using namespace std;
// int sum_of_Integer(int n){
//     if(n<=9 && n>=0) return n;
//     return sum_of_Integer(n/10)+(n%10);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum_of_Integer(n);
// }

//given an array ,print all the elements of the given array in recurive

// #include<iostream>
// using namespace std;
// void f(int *arr,int idx,int n){
//     if(idx==n) return;
//     cout<<arr[idx]<<" ";
//     f(arr,idx+1,n);
// }
// int main(){
//     int n=5;
//     int arr[]={5,4,3,2,1};
//     f(arr,0,n);
//     return 0;
// }

// print the max value of the array
// #include<iostream>
// using namespace std;
// int f(int *arr,int idx,int n){
//     if(idx==n-1) return arr[idx];
//     return max(arr[idx],f(arr,idx+1,n));
// }
// int main(){
//     int n=7;
//     int arr[]={7,6,4,2,9,8,1};
//     cout<<f(arr,0,n);
// }

// find the sum of the values the array[2,3,5,20,1];

// #include<iostream>
// using namespace std;
// int f(int *arr, int idx,int n){
//     if(idx==n-1) return arr[idx];
//     return arr[idx]+f(arr,idx+1,n);
// }
// int main(){
//     int n=5;
//     int arr[]={2,3,5,20,1};
//     cout<<f(arr,0,n);
// }

//remove all occaeance of 'a'in a string s="abcax";

// #include<iostream>
// using namespace std;
// string f(string &s, int idx, int n){
//     if(idx==n) return "";
//     string cur="";
//     cur+=s[idx];
//     return (s[idx]=='a'? "":cur)+f(s,idx+1,n);
// }
// int main(){
//     string s="abcax";
//     int n=5;
//     cout<<f(s,0,n);
// }

//write a program to check whether a number is palindrome or not.

// #include<iostream>
// using namespace std;
// bool f(int num ,int *temp){
//     if(num>=0 && num<=9){
//         int lastdigitoftemp=(*temp)%10;
//         (*temp) /= 10;
//          return (num==lastdigitoftemp);
//     }
//      bool result=(f(num/10,temp) and (num%10) ==((*temp)%10));
//      (*temp) /=10;
//      return result;
// }
// int main(){
//     int num=121;
//     int anotherNum=num;
//     int *temp=&anotherNum;
//     cout<<f(num,temp);
//     return 0;
// }

// given a number n.Find the increasing sequence from 1 to n without using any loop
// intput n=4;
// output: 1 2 3 4 

// #include<iostream>
// using namespace std;
// void f(int i,int n){
//     if(i>n) return ;
//     cout<<i<<" ";
//     f(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
// }

//given a number num and  avalue k . prin k muliples of num.
// input: num=12,k=5
// outpu:12,24,36,48,60

// #include<iostream>
// using namespace std;
// void f(int n,int k,int i){
//     if(i>k) return;
//     cout<<i*n<<" ";
//     f(n,k,i+1);
// }
// int main(){
//     int n;
//     int k;
//     cin>>n>>k;
//     f(n,k,1);
// }

// given  a number n. find the sum of natural numbers till n but with altrenae signs.
// that means if n=5 then you have to return 1-2+3-4+5=3 as your answer.

// #include<iostream>
// using namespace std;
// int f(int n){
//     if(n==0) return 0;
//     return f(n-1)+((n%2==0)? (-n):(n));
     
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n);
// }

//given an array of n intergers and a targe value x. print whether x exists in the array or no

//input 1: n=8,x=14,array=[4,12,4,14,3,8,6,1]
//output=yes;

// #include<iostream>
// using namespace std;
// int target(int *arr,int x,int n,int idx){
//     if(n==idx) return 0;
//     if(arr[idx]==x)return 1;
//     target(arr,x,n,idx+1);
// }

// int main(){
//   int n=8;
//   int arr[8]={4,12,4,14,3,8,6,1};
//   int x=14;
//     cout<<target(arr,x,n,0);
// }

//given an array of integers, print sum of all subsets in it. output sums can be printed in any order.
// input: arr[]={2,3}
// output: 0 2 3 5

//input:{2 4 5}
//output:0 2 4 5 6 7 9 11





//home work

// print the increasing and decresing sequence

//ex:1 2 3 4 3 2 1

// #include<iostream>
// using namespace std;
// void increaseing(int i,int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     increaseing(i+1,n);
    
// }
// void decresing(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     decresing(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     increaseing(1,n);
//     decresing(n-1);
// }

//  Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
//  recursion.

// #include<iostream>
// using namespace std;
// void odd_printing(int a,int b,int &sum){
//     if(a>b) return ;
//     if(a==b){
//         if(a%2!=0) sum+=a;
//         return;
//     }
//     if(a%2 != 0) {
//         sum+=a;
//         odd_printing(a+2,b,sum);
//     }
//     else  odd_printing(a+1,b,sum);
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int sum=0;
//     if(a>b) swap(a,b);
//     odd_printing(a,b,sum);
//     cout<<sum;
// }

// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.

// #include <bits/stdc++.h>
// using namespace std;
// int findNumberOfWays(int n) {
// if(n < 0) return 0;
// if(n == 0)return 1;
// return findNumberOfWays(n-1) + findNumberOfWays(n-2) + findNumberOfWays(n-3);
// }
// int main() {
// int n;
// cin >> n;
// cout << findNumberOfWays(n) << endl;
// return 0;
// }

// given a positive integer, return true if it is a power of 2.

// #include<iostream>
// using namespace std;
// bool  n_is_power_of2(int n){
//     if(n==1) return true;
//     if(n%2!=0) return false;
//     n_is_power_of2(n/2);

// }
// int main(){
//     int n;
//     cin>>n;
//    if( n_is_power_of2(n)) cout <<n <<" the number is power of 2";
//     else cout<<n<<" not a power of number";
// }

//week 2 learning
// write a function to calculate the nth fibonacci number using recursion
// fibboci series 1 1 2 3 5 8 13 21..
// n=5 
// output=5

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==1 || n==0) return n;
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n);
// }

//power function
// here reducung the power rotation no.of time reduced with logic int this code
// int power(int a,int b){
//     // if(b>1) return 1;
    
//     if(b==1) return a;

//     if(b%2==0){
//        int  ans=power(a,b/2);
//         return ans*ans;
//     }  
//     else {
//        int  ans=power(a,b/2);
//         return ans*ans*b;
//     } 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }

// stair case path
// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     return stair(n-1)+stair(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<stair(n);
// }

//home work

//print a sum of the number using recurstion

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n<9 ) return n;
//     return n%10+sum(n/10);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

// calculate reverse of a number using recurstion.

// #include<iostream>
// using namespace std;
// int rev(int n,int ans){
//     // static int ans=0;
//     if(n<=0) return ans;
//     int dig=n%10;
//      ans=ans*10+dig;
//     return rev(n/10,ans);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     cout<<rev(n,ans);
// }

//

// Print all the elements of an array in reverse order.
// #include<iostream>
// using namespace std;
// void f(int *arr, int n){
//     if(n<0) return;
//     cout<<arr[n]<<" ";
//     f(arr,n-1);
// }
// int main(){
//     int n=8;
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     f(arr,8);
// }

// Print index of a given element in an array. If not present, print -1.

// #include<iostream>
// using namespace std;
// int f(int *arr,int target,int n ,int idx){
//     if(idx==n-1) return -1;
//     if(target==arr[idx]){
//         return idx;
//         }
//     f(arr,target,n,idx+1);
// }
// int main(){
//     int n=9;
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int target=4;
//     cout<<f(arr,target,n,0);

// }

// Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]

//  #include<iostream>
//  using namespace std;
//  void print(int arr[],int n){
//     if(n<1) return;
//     int temp[n-1];
//     for(int i=0;i<n-1;i++) temp[i]=arr[i]+arr[i+1];
   
//     for(auto x:temp){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//      print(temp,n-1);
//  }
//  int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(auto x:a) cout<<x<<" ";
//     cout<<endl;
//     print(a,n);
//  }


 
 // thired week

// tower of HANOI

// #include<iostream>
// using namespace std;
// void hanoi(int n,char a,char b, char c){
//     if(n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<"->"<<c<<endl;
//     hanoi(n-1,b,a,c);
// }
// int main(){
//     int n=4;
//     // cin>>n;
//     hanoi(n,'A','B','C');
// }

//find the maximum element of an array using recurstion

// #include<iostream>
// using namespace std;
// int max_ele(int *arr,int maxele,int idx,int n){
//     if(idx==n) return maxele;
//     if(arr[idx]>maxele) maxele=arr[idx];
//     max_ele(arr,maxele,idx+1, n);

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int maxele=0;
//    cout<< max_ele(arr,maxele,0, n);
// }

//print seubset of a string with unique characters.
//follow up: Do it for array as well

// #include<iostream>
// #include<string>
// using namespace std;
// void printSubset(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1));
//     printSubset(ans,original.substr(1));
    
// }
// int main(){
//     string str="abc";
//     printSubset("",str);
// }

//follow up with array same qustion

// #include<iostream>
// #include<vector>
// using namespace std;
// void printSubset(int arr[],int n,int idx,vector<int>ans){
//     if(idx==n){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";

//         }
//         cout<<endl;
//         return;
//     }
//     printSubset(arr,n,idx+1,ans);
//     ans.push_back(arr[idx]);
//     printSubset(arr,n,idx+1,ans);
// }
// int main(){
//     int arr[3]={1,2,3};
//     int n=3;
//     vector<int> v;
//     printSubset(arr,n,0,v);
// }

//print subsets of a string containing duplicate character

// output:
// aab
// aa
// ab
// a
// b
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void storeSubset(string ans,string original,vector<string>& v,bool flag){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch= original[0];
//     if(original.length()==1){
//         if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,true);
//         return;
//     }
//     int dh=original[1];
//     if(ch==dh){
//         if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
//          storeSubset(ans,original.substr(1),v,false);
//     }
//     else{
//         if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,true);
//     }
// }
// int main(){
//     string str= "aab";
//     vector<string> v;
//     storeSubset("",str,v,true);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// }

// print all increasing sub sequence of length k from first n  natural numbers;
// output: 345
// 245
// 235
// 234
// 145
// 135
// 134
// 125
// 124
// 123
// #include<iostream>
// #include<vector>
// using namespace std;
// void k_length_ele(int arr[],int n,int idx,vector<int> ans,int k){
//     if(idx==n){
//         if(ans.size()==k){
//             for(int i=0;i<ans.size();i++){
//                 cout<<ans[i]<<"";
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     if(ans.size()+(n-idx)<k) return;
//     k_length_ele(arr,n,idx+1,ans,k);
//     ans.push_back(arr[idx]);
//      k_length_ele(arr,n,idx+1,ans,k);
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int k=3;
//     vector<int> ans;
//     k_length_ele(arr,n,0,ans,k);
// }

// permutations of string exc
// input: abc
// output:
// abc
// acb
// bac
// bca
// cab
// cba

// #include<iostream>
// using namespace std;
// void permitations(string ans,string st){
//     if(st==""){
//         cout<< ans<<endl;
//         return;
//     }
//     for(int i=0;i<st.length();i++){
//           char ch=st[i];
//           string left= st.substr(0,i);
//           string right= st.substr(i+1);
//           permitations(ans+ch,left+right);
//     }
// }
// int main(){
//     string s="abc";
//     permitations("",s);
// }




// Print all the increasing sequences of length k from first n natural numbers.

// #include<iostream>
// using namespace std;
// void n_isincresed_by_k(int n,int k,int idx){
//     if(idx>n) return ;
//     cout<<idx+k<<" ";
//      n_isincresed_by_k(n,k,idx+1);
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     n_isincresed_by_k(n,k,1);
// }



// find out minimum element of an array using recursion

// #include<bits/stdc++.h>
// using namespace std;
// int mini(int arr[],int &ans,int idx ,int n){
//         if( idx==n){
//             return ans;
//         }
//         if(arr[idx]<ans) ans=arr[idx];
//        mini(arr,ans,idx+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mi=INT_MAX;
//     cout<<mini(arr,mi,0,n);
// }

//sumof all elements of an array using recurstion

// #include<iostream>
// using namespace std;
// int  sum(int arr[],int n,int idx,int ans){
//     // cout<<n<<" "<<idx;
//     if(n==idx){
//         return ans;
//     }
//     ans+=arr[idx];
//    // cout<< n<<" "<<idx<<" "<< ans<<endl;
//      sum(arr,n,idx+1,ans);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sum(arr,n,0,0);
// }

//print index of a given element in an array . if not present , print -1;

// #include<iostream>
// using namespace std;
// int target(int arr[],int n,int idx,int &tar){
//     if(n==idx){
//         return -1;
//     }
//     if(tar==arr[idx]) return idx;
//     target(arr,n,idx+1,tar);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int tar=3;
//     cout<<target(arr,n,0,tar);
// }

// print all the elements of an array in reverse

// #include<iostream>
// using namespace std;
// void rev(int arr[],int n,int idx){
//     if(n==idx){
//        return ;
//     }
//     cout<<arr[n]<<" ";
//      rev(arr,n-1,idx); 
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     rev(arr,n-1,-1);
// }

// print and store subsets of a array containing not duplicate characters

// #include<iostream>
// #include<vector>
// using namespace std;
// void  duplicates(vector<int> v,int *arr,int n,int idx){
//     if(idx==n){
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
//       return;
//     }
    
//     duplicates(v,arr,n,idx+1);
//     v.push_back(arr[idx]);
//     duplicates(v,arr,n,idx+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v;
//     duplicates(v,arr,n,0);
// }

//generate all binary string of length n without consecutive 1's

// #include<iostream>
// #include<string>
// using namespace std;
// void generate(string s,int n){
//    if(n==s.length()){
//       cout<<s<<endl;
//       return;
//    }
//    generate(s+'0',n);
//    generate(s+'1',n);
// }
// int main(){
//    int n;
//    cin>>n;
//    generate("",n);
// }

//combination sum
// input: 2 3 5
// target=8
// output: 2 2 2 2
//         2 3 3
//         3 2 3
//         3 3 2
//         3 5
//         5 3

// #include<iostream>
// #include<vector>
// using namespace std;
// void generate(int arr[],int n,vector<int> v,int tar){
//     if(tar==0){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(tar<0) return;
//     for(int i=0;i<n;i++){
//         v.push_back(arr[i]);
//         generate(arr,n,v,tar-arr[i]);
//         v.pop_back();  
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v;
//     generate(arr,n,v,3);
// }

// generate  parenthess
// input:3
// output: ["((()))","(()())","(())()","()(())","()()()"];

// #include<iostream>
// using namespace std;
// void generate(string s,int open,int close,int n){
//     if(close==n){
//         cout<<s;
//         cout<<endl;
//         return;
//     }
//     if(open<n) generate(s+'(',open+1,close,n);
//     if(close<open) generate(s+')',open,close+1,n);   
// }

// int main(){
//     int n=2;
//     generate("",0,0,n);
// }

// k th symbol in grammer
// k=5
// output 
// 1
// k=6
// output 
// 0

// #include<iostream>
// using namespace std;
// int k_grammer(int n,int k){
//     if(n==1) return 0;
//     if(k%2==0){
//         int present=k_grammer(n-1,k/2);
//         if(present==0) return 1;
//         else return 0;
//     }
//     else{
//         int present=k_grammer(n-1,(k/2+1));
//         return present;
//     }
// }
// int main(){
// int n=4;
// int k=5;
// cout<<k_grammer(n,k);
// }

// count and say
// A function countAndSay is defined as:
// countAndSay(1) = “1”
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then
// converted into a different digit string.
// So, if sample input is n = 4,
// countAndSay(1) = 1
// countAndSay(2) = “one 1” => 11
// countAndSay(3) = “two 1” => 21
// countAndSay(4) = “one 2 one 1” => 1211

// #include<iostream>
// #include<string>
// using namespace std;
// string cas(int n){
//     if(n==1) return "1";
//    string str=cas(n-1);
//    string ans="";
//    int freq=1;
//    char ch=str[0];
//    for(int i=1;i<str.length();i++){
//     char dh=str[i];
//     if(ch==dh){
//         freq++;
//     }
//     else{
//         ans+=to_string(freq)+ch;
//         freq=1;
//         ch=dh;
//      }
//    }
//   ans+=to_string(freq)+ch;
//    return ans;
// }
// int main(){
//     int n=4;
//     cout<<cas(n);
// }

//next permitations
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void permutations(vector<string>& v,string ans,string original){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     for(int i=0;i<original.size();i++){
//         char ch=original[i];
//         string left=original.substr(0,i);
//         string right =original.substr(i+1);
//         permutations(v,ans+ch,left+right);
//     }
// }
// int main(){
//     string str="123";
//     vector<string> ans;
//     permutations(ans,"",str);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }
// }
