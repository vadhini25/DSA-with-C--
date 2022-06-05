#include <iostream>
using namespace std;
#define R 4
#define C 4

void spiralTraversal(int n,int m,int arr[R][C]){
    int start_row_index=0;
    int start_colmn_index=0;
    int end_row_index;
    int end_column_index;

    while(start_row_index<end_row_index && start_colmn_index<end_column_index){
        for(int i=1;i<n;i++){
            cout<<arr[start_row_index][i]<<"";
        }
        start_row_index++;

        for(int i=start_row_index;i<end_row_index;i++){
            cout<<arr[i][end_row_index-1]<<"";

        }
        end_row_index--;

        if (start_row_index<end_row_index){
            for(int i=end_column_index-1;i>=1;i--){
                cout<<arr[end_row_index-1][i]<<" ";
            }
            end_row_index--;
        }

        if(start_colmn_index<end_column_index){
            for(int i=end_row_index-1;i>=start_row_index;i--){
                cout<<arr[i][start_colmn_index]<<" ";
            }
            start_colmn_index++;

        }
        

    }

} 

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    spiralTraversal(R,C,arr)<<endl;
    return 0;

}    