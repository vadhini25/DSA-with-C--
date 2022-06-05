#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s = "VhiniQ";
    for(int i =0;i<s.length();i++){
        s[i] = (char) tolower(s[i]);
    }
    cout<<s<<endl;
    for(int j = 0;j<s.length();j++){
        s[j] = (char) toupper(s[j]);
    }
    cout<<s<<endl;


    return 0;
}