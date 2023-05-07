// taking the sum of square of 10 numbers store in an array

#include <iostream>
using namespace std;
int main(){
    int array[10];
    int sumsqr = 0;
    for(int i=0; i<10; i++){
        cout<<"please enter the number ";
        cin>>array[i];
    }
    for(int i=0; i<10; i++){
        sumsqr = sumsqr + (array[i]*array[i]);
    }
    cout<<sumsqr;
}
