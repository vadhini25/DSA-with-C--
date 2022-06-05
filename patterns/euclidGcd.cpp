#include<iostream>
using namespace std;
int gcd(int a,int b)
{ 
 while(b!=0)
 {
  int result=a%b;
  a=b;
  b=result;
 }
 return a;
}
int main() {
     int a,b;
     cout<<"enter first number";
     cin>>a;
     cout<<"enter Second number";
     cin>>b;
     cout<<gcd(a,b);
    return 0;
}