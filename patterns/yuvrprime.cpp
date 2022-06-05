#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num)
 { 
 for(int i=2;i<num;i++){ 
      
       if(num%i==0)
        {
           return false;
           break;
       }
       else
       {
           return true;
           break;
       }
       
   }
 
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    for(int i=num1;i<num2;i++){
        if(i==2)
       {
         cout<<i<<endl;
         
       }
      if(isPrime(i)){
          cout<<i<<endl;
      }
    }
return 0;
}
