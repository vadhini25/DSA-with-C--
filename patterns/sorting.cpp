#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{ 
if(n==1)
{ 
    return true;
}
bool restarrya=sorted(arr+1,n-1);
return (arr[0]<arr[1]&&restarrya);
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are in ";
    cout<<sorted(arr,n);
    return 0;
}