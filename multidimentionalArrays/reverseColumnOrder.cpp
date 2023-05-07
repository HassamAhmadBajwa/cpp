// taking multidimentional array from the user and reverse the column order

#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"please enter the rows ";
    cin>>rows;
    cout<<"please enter the column ";
    cin>>cols;
    //initialize the matrix 
    int matrix[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"please enter the number for index of "<<i<<" "<<j<<"\t";
            cin>>matrix[i][j];
        }
    }
    // display the matrix 
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"after reverse "<<endl;
    // reverse the column order 
    for(int i=0; i<rows; i++){
        for(int j=cols-1; j>=0; j--){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}