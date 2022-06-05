#include<iostream>
using namespace std;

int bitman(int n,int pos){
    return ((n & ~(1<<pos))) == 1;
}
int main(){
    int num, position;
    cin>>num>>position;
    cout<<bitman(num,position);
    return 0;
}