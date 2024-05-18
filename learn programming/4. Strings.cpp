
//string
//basic string  code
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){   
//     string str="reshma vaka";  
//     cout<<str;
// }

// input a string of length n and count all the vowels in the given array;

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     int i=0,count=0;
//     while(str[i]!='\0'){
//         if(str[i]=='A' || str[i]=='a'||str[i]=='E' || str[i]=='e'||str[i]=='I' || str[i]=='i'||str[i]=='o' || str[i]=='O' ||str[i]=='U' || str[i]=='u'){
//             count++;         
//         } 
//         i++;
//     }
//     cout<<count;
// }

//Input a string of size n and update all the even positions in the string to character 'a'. 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//  string str;
//  cin>>str;
//  for(int i=0;str[i]!='\0';i++){
//     if(str[i]%2==0) str[i]='a';
//  }
//  cout<<str;
// }

//input a string of even length and reverse first half
// #include<iostream>
// #include<string>
// using namespace std;

// void reverse(int i, int j, string &s) {
//     while (i < j) {
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         i++;
//         j--;
//     }
// }

// int main() {
//     string s;
//     getline(cin, s);
//     int n = s.length();
//     int m = n / 2;
//     reverse(0, m - 1, s); // Fix the indices here
//     cout << s;
//     return 0;
// }
//input a string of length grather than 5 and reverse substring from position 2 to 5 using inbuilt functions.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     reverse(str.begin()+2,str.begin()+5);
//     cout<<str;
// }

// input a string of even length and return the second half of that using inbuilt substr funtion

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str.substr(4);
// }

//return the total number of digits in a number without using any loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n=1234;
//     string s=to_string(n);
//    cout<<s;
// }

// home work

// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"
// input : str = "a"
// Output : "a"

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     for(int i=0;str[i]!='\0';i++){
//         if(i%2!=0){
//             str[i]='#';
//         }
//     }
//     cout<<str;
// }

// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
    
//     getline(cin,str);
//     int count=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='A' && str[i]!='a'&& str[i]!='E'  && str[i]!='e'&& str[i]!='I' && str[i]!='i'&&str[i]!='o' && str[i]!='O' && str[i]!='U' && str[i]!='u'){
//          count++;
//         }

//     }
//     cout<<str.length()-count;
// }


// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// string str;
// int flag=true;
// getline(cin,str);
// int i=0;
// int j=str.length()-1;
//   while(i<=j){
//        if(str[i]==str[j]){
//           i++;
//           j--;
//         }
//         else {
//         flag=false;
//          break;
//        }
//     }
// if(flag==true) cout<<"Yes";
// else cout<<"no";
// }

// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12

// #include<iostream>
// #include<string>
// #include <algorithm>
// using namespace std;
// int main(){
// string str;
// getline(cin,str);
// int n=str.length();

// int i=n/2;
// reverse(str.begin()+i,str.end());
   
// cout<<str;
// }

//Week 2
// input a string and return the number of items the neighbouring charecter are different from each other
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int n=str.length()-1;
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(n==1){
//             break;
//         }
//         if(n==2 && str[0]!=str[1]){
//             count++;
//             break;
//         }
//         if(i==0){
//            if(str[i]!=str[i+1]) count++;
//         }
//         if(i==n){
//             if(str[i]!=str[i-1]) count++;
//         }
//         else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
//             count++;
//         }

//     }
//     cout<<count;
// }

//sorting a string using in -built function

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     sort(str.begin(),str.end());
//     cout<<str;
// }

// Given two strings S and t retur true if t is an anagram of S , and flase otherwise.

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s,t;
//     getline(cin,s);
//     getline(cin,t);
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t)  cout<<" true";
//     else cout<<"false";
// }
//

//given n strings consisting of lowercase English Alphabets. 
//print the chareter that is occurring most number of times
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     vector<int> arr(26,0);
//     for(int i=0;i<str.length();i++){
//        char ch=str[i];
//        int ascii=(int)ch;
//        arr[ascii-97]++;
//     }
//     int max=0;
//     for(int i=0;i<26;i++){
//         if(arr[i]>max) max=arr[i];
//     }
//     for(int i=0;i<26;i++){
//         if(arr[i]==max) {
//            int ascii=i+97;
//            char ch=(char)ascii;
//           cout<<ch<<" "<<max<<endl;
//         }
//     }
// }

// given a sentance ,split every single word of the sentance and print in a new line
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<sstream>
// using namespace std;
// int main(){
//  string str="reshma is a software engineer";
//  stringstream ss(str);
//  string temp;
//  while(ss>>temp){
//     cout<<temp<<endl;;
//  }
// }

//given a sentance str,return the word that is occuring most number of times in that sentances;

// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<sstream>
// #include<vector>
// using namespace std;
// int main(){
//     string str="reshma is good problem solver and she is good problem resolver.";
//     stringstream ss(str);
//     string temp;
//     vector<string> arr;
//     while(ss>>temp){
//      arr.push_back(temp);
//     }
//     int count=1;
//     int maxcount=1;
//     sort(arr.begin(),arr.end());
//     for(int i=1;i<arr.size();i++){
//         if(arr[i]==arr[i+1]) count++;
//         else count=1;
//         maxcount=max(count,maxcount);
//     } 
//    for(int i=1;i<arr.size();i++){
//         if(arr[i]==arr[i+1]) count++;
//         else count=1;
//         if(count==maxcount) cout<<arr[i]<<" "<<maxcount;
//     } 
   
// }

// given n strings consisting of digits from 0 to 9 . Return the index of string which has maximum value .
// take 0 based index
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string arr[]={"0123","0023","456","00182","940","002901"};
//     int max=stoi(arr[0]);
  
//     for(int i=1;i<=5;i++){
//         int x=stoi(arr[i]);
//         if(x>max) {
//             max=x;
//         }
//     }
//     cout<<max;
// }

// 

// home work

// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

// #include<iostream>
// #include<Algorithm>
// using namespace std;
// int main(){
//     string str,m;
//     getline(cin,str);
//     m=str;
//     reverse(str.begin(),str.end());
//     cout<<m+str;
// }

// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// string str;
// getline(cin,str);
// char max='!',max2='!';
// for(int i=0;i<str.length();i++){
//     if(str[i]>max){
//         max2=max;
//         max=str[i];
//     }
//     else if(str[i]>max2) max2=str[i];
// }
// cout<<max2;
// }


// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// string s;
// cin >> s;
// int ans = 0, l = 0;
// for (int i = 0; i < (int)s.size(); i++) {
// if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
// l++;
// else {
// ans = l * (l + 1) / 2;
// l = 0;
// }
// }
// ans += l * (l + 1) / 2;
// cout << ans+1;
// }

// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str,s;
//     getline(cin,str);
//     getline(cin,s);
//     sort(str.begin(),str.end());
//     sort(s.begin(),s.end());
//     if(str==s) cout<<"true";
//     else cout<<"False";

// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s,t;
//     getline(cin,s);
//     getline(cin,t);
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t) cout<<"true";
//     else cout<<"false";  
// }

// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// string str ;
// getline(cin , str); //method to input a string with spaces
// int n = str.size();
// string mx = "", word = "";
// for (int i = 0; i < n; i++) {
// if (str[i] == ' ') {
// mx = max(mx, word);
// word = "";
// } else {
// word += str[i];
// }
// }
// mx = max(mx, word);
// cout << mx << '\n';
// }
