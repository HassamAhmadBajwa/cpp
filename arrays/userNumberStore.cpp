// Write a program which read positive integer from the user and store these ones in an array. 
//User can enter the maximum of 100 numbers. Stop taking input when user can enter the -1.

#include <iostream>
using namespace std;
int main(){
    int array[100];
    int z, i=0;
    do{
        cout<<"please enter the number ";
        cin>>z;
        if(z != -1){
            array[i] = z;
        }
        i++;
    }while(z != -1 && i<100);
    cout<<"the total number enter by the user in array is "<< i-1;
}
