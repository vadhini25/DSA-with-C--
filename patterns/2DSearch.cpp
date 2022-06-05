#include <iostream>
using namespace std;

int main(){
    int n,m,key;
    int res=0;

    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"element found"<<""<<i<<""<<j<<endl;
                res=1;
            }

        }
    }
    if(res==0){
        cout<<"element not found"<<endl;
    }
    
    return 0;
}