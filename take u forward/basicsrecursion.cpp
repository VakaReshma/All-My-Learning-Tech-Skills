//1.understand recursion by print  something n times

#include<iostream>
using namespace std;
int Something_N_times(int m){
   int count =0;  
while(count<=m-1){
    cout<<m<<" ";
    count++;
}
}
int main(){
    int n;
    cin>>n;
    Something_N_times(n);
}

// 2. print name N times using recursion

#include<iostream>
using namespace std;
int name(int m,int c){
    string s="reshma";
 while(m<=c){
 cout<<s<<endl;
 m++;
 }   
}
int main(){
    int n;
    cin>>n;
    name(1,n);
}

// 3. print 1 to N using recursion

#include<iostream>
using namespace std;
Print_1_to_n(int m,int z){
    while(m<=z){
        cout<<m<<" ";
        m++;
    }
}
int main(){
int n;
cin>>n;
Print_1_to_n(1,n);
}

// 4. print  N to 1 using recuruion

#include<iostream>
using namespace std;
int print_N_to_1(int m,int z){
    while(z>=m){
        cout<<z;
        z--;
    }
}
int main(){
    int n;
    cin>>n;
    print_N_to_1(1,n);
}

// 5. sum of first N numbers

#include<iostream>
using namespace std;
int Upto_n_sum(int z,int m){
    int sum=0;
    for(int i=z;i<=m;i++){
     sum+=i;
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    Upto_n_sum(1,n);
}

// 6. factorial of N numbers

#include<iostream>
using namespace std;
int factorial(int z,int n){
    int fact=1;
    for(int i=z;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}
int main(){
    int n;
    cin>>n;
    factorial(1,n);
}
