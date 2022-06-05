#include <iostream>
using namespace std;

int main(){
    int n;
    int  r;
    cin>>n;
    cin>>r;
    int fact=n;
    for (int i=1;i<n;i++){
        fact=fact*i;
    }
    int fact1=r;
    for (int i=1;i<r;i++){
        fact1=fact1*i;

    }
    int fact2=(n-r);
    for (int i=1;i<(n-r);i++){
        fact2=fact2*i;
    }

    cout<<fact/(fact1*fact2);
    return 0;
}