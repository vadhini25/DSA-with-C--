#include<iostream>
using namespace std;
int print_decreasing(int n)
{
    if(n==0){
        return 0;
    }
    cout<<n;
    int recinc=print_decreasing(n-1);
    return recinc;
}
void print_increasing(int n)
{
    if(n==0){
        return;
    }
    print_increasing(n-1);
    cout<<n;
}

int main()
{
    int n;
    cout<<"Enter the num";
    cin>>n;
    cout<<"The Decreasing order is";
    cout<<print_decreasing(n);
    cout<<"The Increasing order is";
    print_increasing(n);
    return 0;
}