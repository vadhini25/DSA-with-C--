#include <iostream>
using namespace  std;

int main(){
    int num;
    
    for(int i=2; i<num;i++){
        cin>>num;
        if(num==2){
            cout<<"prime"<<endl;
            break;
        }
        else if(num%i==0){
            cout<<"not prime"<<endl;
            break;
        }
            
        else{
            cout<<"prime"<<endl;
            break;
        }
    }
}