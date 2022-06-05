#include <iostream>
using namespace std;

int main(){
    int num,rem,sum=0;
    cin>>num;
    int flag=num;
    while(num!=0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
        
    }
    if(sum==flag){
        cout<<"it is amstrong number"<<endl;
    }
    else{
        cout<<"not an amstrong number"<<endl;
    }
    
    return 0;
}