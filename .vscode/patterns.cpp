#include<iostream>
using namespace std;

int main(){
    int rows,colmns,i,j;
    cout<<"enter rows"<<endl;
    cin>>rows;

    cout<<"enter colmns"<<endl;
    cin>>colmns;

    for(i=1; i<=rows;i++){
        for(j=1;j<=colmns;j++){

            cout<<"*";
        }
        cout<<"";
    }
    return 0;
}