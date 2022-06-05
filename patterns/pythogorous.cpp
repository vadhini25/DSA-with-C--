#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin>>a;
    cin>>b;
    cin>>c;

    if(a>b){
        if(a>c){
            if(a*a==b*b+c*c){
                cout<<"pytho triplet1"<<endl;
            }
            else{
                cout<<"not pytho triplet1"<<endl;
            }
            
        }
        else if(a<c) {
            if(c*c==a*a+b*b){
                cout<<"pytho triplet2"<<endl;
            }
            else{
                cout<<"not pytho triplet2"<<endl;
            }
        }
    }
    else if(a<b){
        if(b>c){
            if(b*b==a*a+c*c){
                cout<<"pytho triplet3"<<endl;
            }
            else{
                cout<<" not pytho triplet3"<<endl;

            }
        }
        else if(b<c){
            if(c*c==a*a+b*b){
                cout<<"pytho triplet4"<<endl;
            }
            else{
                cout<<"not a pytho triplet4"<<endl;
            }

        }
            
    }
    return 0;
}