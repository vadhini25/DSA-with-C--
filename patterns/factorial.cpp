#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int fact=num;
    
        for(int i=1;i<num;i++){
            fact=fact*i;
            
        }
        

    
    
    cout<<fact<<endl;

    return 0;
}