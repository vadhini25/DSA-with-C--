#include<iostream>
using namespace std;

int clear(int n,int pos){
    return ((n & ~(1<<pos))) == 1;
}
int bitman(int n,int pos){
    return((n || (1<<pos)) != 0);
}
int main(){
    int num, position;
    cin>>num>>position;
    cout<<clear(num,position);
    cout<<bitman(num,position);
    return 0;
}