#include<iostream>
using namespace std;
int npowerp(int n,int p)
{
    if(p==0)
    { 
        return 1;
    }
    int previouspower=npowerp(n,(p-1));

    return n*previouspower;
}
int main() {
    int n,p;
    cout<<"Enter N";
    cin>>n;
    cout<<"Enter P";
    cin>>p;
    cout<<npowerp(n,p);
    return 0;   
}