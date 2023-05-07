// write a program to sort an array 

#include <iostream>
using namespace std;
void swap(int*, int*);
int main(){
    int array[10];
    int num;
    for(int i=0; i<10; i++){
        cout<<"enter number "<<i<<"\t";
        cin>>array[i];
    }
    // display array
    cout<<"before sorting "<<endl;
    for(int i=0; i<10; i++){
        cout<<"\t"<<array[i];
    }
    // swap the two numbers of array using loops
    for(int i=0; i<10; i++){
        num = 0;
        for(int j=0; j<10; j++){
            if(array[j]>array[j+1]){
                num++;
                swap(&array[j], &array[j+1]);
            }
        }
        // display array elelment after sort 
        cout<<"display after sort "<<endl;
        for(int i=0; i<10; i++){
            cout<<"\t"<<array[i];
        }
        cout<<endl;
        if(num==0){
            break;
        }
    }
    
}
void swap(int* x, int* y){
    int temp;
    if(*x>*y){
        temp = *x;
        *x = *y;
        *y = temp;
    }
}