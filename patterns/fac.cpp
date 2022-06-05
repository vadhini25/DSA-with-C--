#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
    int result=n;
for(int i=1;i<n;i++){
result*=(n-i);
}
return result;
}

int main(){
    int n,r,t,fn,fr,ft;
    cout<<"enter n "<<endl;
    cin>>n;
    cout<<"enter r "<<endl;
    cin>>r;
    t=n-r;
    fn=fact(n);
    fr=fact(r);
    ft=fact(t);
    cout<<"The Combination is"<<(fn/(ft*fr));
    return 0;
}