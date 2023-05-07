// write a program to find the sum of square between 1 to n

#include <iostream>
using namespace std;
int main(){
    int number, sumSquare;
    sumSquare = 0;
    cout<<"Please enter the nth number ";
    cin>>number;
    for(int i=1; i<=number; i++){
        sumSquare = sumSquare + (i * i);
    }
    cout<<"The sum of square between 1 and "<<number<<" is "<<sumSquare;
}