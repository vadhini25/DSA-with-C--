#include<iostream>
using namespace std;
int sum(int n)
{ 
    if(n==0)
    {
        return 0;
    }
    int previousSum=sum(n-1);
    return n+previousSum;
}
int main()
{ 
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<sum(n);
   

    return 0;
}