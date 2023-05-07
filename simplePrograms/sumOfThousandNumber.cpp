//Write a program that print the sum of first 1000 numbers with repetition structure.

#include <iostream>
using namespace std;
int main(){
    int sum, number;
    sum = 0;
    number = 1;
    while(number<=1000){
        sum = sum + number;
        number++;
    }
    cout<<"The sum of fist 1000 number is: "<< sum;
}
