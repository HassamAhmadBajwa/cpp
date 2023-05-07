// multidimensional arrays
// display two rows and 3 cols matrix

#include <iostream>
using namespace std;
int main(){
    int matrix[2][3], rows, cols;
    rows = 2;
    cols = 3;
    cout<<"please enter the numbers of matrix "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"numbers ["<<i<<"] ["<<j<<"]"<<matrix[i][j]<<endl;
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"\t"<<matrix[i][j];
        }
        cout<<endl;
    }
}