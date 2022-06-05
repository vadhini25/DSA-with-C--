#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    cout<<str;

    string str;
    string str1(5,'n');
    cout<< str1 <<endl;

    string str="apnikaksha";
    cout<<str;

    string str;
    getline(cin,str);//input full sentence
    cout<<str<<endl;

    string str;
    string s1="fam";
    string s2="ily";
    cout<< s1+s2 <<endl;
    s1.append(s2);
    cout<<s1<<endl;

    string s1="fam";
    string s2="ily";
    cout<< s1[1]<<endl;

    string abc="jdfnfjrgtjgn";
    abc.clear;
    cout<<abc;

    string s1="abc";
    string s2="xyz";
    if (s1.compare(s2)==0){
        cout<<"strings are equal";
    }
    cout<<s2.compare(s1)<<endl;

    string s1="abc";
    cout<<s1<<endl;

    s1.clear();

    if(s1.empty()){
        cout<<"string is empty";
    }

    string s1= "nincompoop";
    s1.erase(3,3);
    cout<s1<<endl;

    string s1="nincompoop";
    cout<<s1.find("poo")<<endl;

    string s1="nincompoop";
    s1.insert(2,"lol");
    cout<<s1<<endl;

    string s1="nincompoop";
    cout<<s1.size()<<endl;

    string s1="nincompoop";
    string s = s1.substr(6,4);
    cout<< s <<endl;

    string s1="786";
    int x=stoi(s1);
    cout<<x+2<<endl;

    int x=786;
    cout<<to_string(x)+"2"<<endl;

    //sorting a string 

    string s1="xjfvnjfvnkfv";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    

    
    


    


    return 0;
}