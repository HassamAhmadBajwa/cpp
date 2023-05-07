// takig multidimentional array from user and reverse the row order

#include<iostream>
using namespace std;
int main(){
    // initialize the matrix 
    int  maxrows, maxcols;
    maxrows = 3;
    maxcols =3;
    int matrix [maxrows][maxcols];
    for(int i=0; i<maxrows; i++){
        for(int j=0; j<maxcols; j++){
            cout<<"plese enter the number of "<<i<<" "<<j<<"\t";
            cin>>matrix[i][j];
        }
    }
    //display the user define matrix
    cout<<"before flip the rows "<<endl;
    for(int i=0; i<maxrows; i++){
        for(int j=0; j<maxcols; j++){
            cout<<"\t"<<matrix[i][j];
        }
        cout<<endl;
    }
    // for flip the rows 
    cout<<"after flip the rows "<<endl;
    for(int i=maxrows-1; i>=0; i--){
        for(int j=0; j<maxcols; j++){
            cout<<"\t"<<matrix[i][j];
        }
        cout<<endl;
    }
}