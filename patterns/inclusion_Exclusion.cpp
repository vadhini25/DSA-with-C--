#include<iostream>
using namespace std;
void divisibleByab(int a,int b,int n)
{
     cout<<"The no. divisible by both "<<a<<" , "<<b<<" are\n";
       int count=0;
    for(int i=0;i<n;i++)
    { 
       if(i%a==0 || i%b==0)
       { 
          cout<<i<<" ";    
          count++; 
       }
    }
    cout<<"\n"<<count;
}
int incluexclu(int a,int b,int n)
{ 
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main()
{
    int a,b,n;
    cout<<"Enter the Range";
    cin>>n;
    cout<<"Enter the first no.";
    cin>>a;
    cout<<"Enter the Second no.";
    cin>>b;
    // divisibleByab(a,b,n);
   cout<<incluexclu(a,b,n);
    return 0;
}