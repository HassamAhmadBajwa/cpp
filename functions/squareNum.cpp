// write a function to calculate the square of a number

#include <iostream>
using namespace std;
int square(int);
int main(){
    int number, result;
    number = 0;
    result = 0;
    cout<<"please enter the number ";
    cin>>number;
    result = square(number);
    cout<<"the square of "<<number<<" is "<<result;
}
int square(int number){
    return (number*number);
}