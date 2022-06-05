#include <iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    int key;
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"element found"<<i<<endl;
        }
    } 
    cout<<"element not found"<<endl;
    return 0;
}    
