#include <iostream>
using namespace std;
int bitman3(int n3, int pos3, int val){
    int number = ~(1<<pos3);
    int k = (n3 & number);
    return (k | (val<<pos3));
}

int main(){
    int num, position,value;
    cin>>num>>position>>value;
    cout<<bitman3(num,position,value)<<endl;
    return 0;
}