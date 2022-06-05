#include <iostream>
using namespace std;

void sequence(int num1){
    int s[num1];
    s[0]=0;
    s[1]=1;
    for(int i=2;i<num1;i++){
        s[i]=s[i-2]+s[i-1];
        
    }
    for(int i=0;i<num1;i++){
        cout<<s[i]<<endl;
 
    }


}




int main(){
    int num1=10;
    sequence(num1);
    return 0;
}
