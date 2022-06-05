#include<iostream>
using namespace std;

int bitman(int n,int pos){
    return((n || (1<<pos)) != 0);
}
int main(){
    int num, position;
    cin>>num>>position;
    cout<<bitman(num,position);
    return 0;
}