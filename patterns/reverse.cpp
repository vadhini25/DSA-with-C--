#include <iostream>
using namespace std;

int main(){
    int num,rem,rev=0;
    cin>>num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/10;
    }
    cout<<"reverse number is:"<<rev<<endl;
    return 0;
    }
