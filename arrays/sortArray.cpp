// sort an unsorted array

#include <iostream>
using namespace std;
int main(){
    int array[5];
    int num = 0;
    // making an array 
    for(int i=0; i<5; i++){
        cout<<"please enter the array ";
        cin>>array[i];
    }
    // print unsorted array
    for(int i=0; i<5; i++){
        cout<<"\t"<<array[i];
    }
    //sort array
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(array[i]>array[j]){
                num = array[i];
                array[i] = array[j];
                array[j] = num;
            }
        }
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<"\t"<<array[i];
    }
}