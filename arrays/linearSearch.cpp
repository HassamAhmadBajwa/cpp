// linear search of number in an array 

#include<iostream>
using namespace std; 
int main(){
    int array[100];
    int find, index, num = 1;
    for(int i=0; i<100; i++){
        array[i] = num;
        num++;
    }
    cout<<"please enter the number ";
    cin>>find;
    int found = 0;
    for(int i=0; i<100; i++){
        if(find==array[i]){
            found = 1;
            index = i;
            break;
        }
    }
    if(found==1){
        cout<<"the number is present in array at index "<<index;
    }else{
        cout<<"the number is not present in array ";
    }
}
