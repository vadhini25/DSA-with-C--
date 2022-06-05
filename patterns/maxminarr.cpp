#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    int maxno=INT_MIN;
    int minno=INT_MAX;

    for (int i=0;i<5;i++){
        if(arr[i]>maxno){
            maxno=arr[i];

        }
        if(arr[i]<minno){
            minno=arr[i];
        }

    }
    cout<<"maximum number is:"<<maxno<<endl;
    cout<<"minimum number is:"<<minno<<endl;
    return 0;

    
}