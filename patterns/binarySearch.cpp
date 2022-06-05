#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int lower=0;
    int upper=n;
    int mid;

    while(lower<=upper){
        mid=(lower+upper)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            lower=mid+1;
        }
        else{
            upper=mid-1;
        }

    }
    return -1;
}



int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;

    return 0;

}