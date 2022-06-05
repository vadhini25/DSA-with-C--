#include<iostream>
using namespace std;
int fact(int n)
{ 
    if(n==1)
    { 
        return 1;
    }
    int prevResult =fact(n-1);
    return n*prevResult;
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<fact(n);
    return 0;
 }