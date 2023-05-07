// compare two arrays and display them on screen

#include<iostream>
using namespace std;
int main(){
    int array1[5], array2[5];
    int equal;
    // making two arrays
    for(int i=0; i<5; i++){
        cout<<"enter the first array ";
        cin>>array1[i];
    }
    for(int i=0; i<5; i++){
        cout<<"enter the second array ";
        cin>>array2[i];
    }
    //display arrays
    for(int i=0; i<5; i++){
        cout<<"\t"<< array1[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<"\t"<<array2[i];
    }
    //compare two arrays
    for(int i=0; i<5; i++){
        if(array1[i]==array2[i]){
            equal = 1;
        }else{
            equal = 0;
        }
    }
    cout<<endl;
    if(equal){
        cout<<"the arrays are equal ";
    }else{
        cout<<"arrays are not equal ";
    }
}