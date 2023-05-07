// write a program to take multidimentional array from user and transpose the matrix 

#include <iostream>
using namespace std;
const int size = 3;
void readMatrix(int arr[][size]);
void displayMatrix(int a[][size]);
void transposematrix(int a[][size]);
int main(){

    
    int a[size][size];
    // read the matrix 
    readMatrix(a);
    //display the matrix 
    cout<<"\n\n"<<"the original matrix is : "<<"\n";
    displayMatrix(a);
    //transpose matrix 
    transposematrix(a);
    
    //display transpose matrix 

    cout<<"\n\n"<<"the transopose matrix is :"<<"\n";
    displayMatrix(a);
}
void readMatrix(int arr[][size]){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<"enter the number for index "<<i<<" "<<j<<"\t";
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
}
void displayMatrix(int a[][size]){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void transposematrix(int a[][size]){
    int temp;
    for(int i=0; i<size; i++){
        for (int j=i; j<size; j++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            
        }
    }
}

