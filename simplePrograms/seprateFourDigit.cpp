// write a program that take the four digit number from the user and seprate each digit.

#include<iostream>
using namespace std;
int main(){
    int number, digit;
    cout<<"please enter the four digit number";
    cin>>number;
    //seprate the last digit number
    digit = number%10;
    cout<<digit<<",";
    // remaining number 
    number = number/10;
    //seprate again last digit
    digit = number%10;
    cout<<digit<<",";
    //remaining number
    number = number/10;
    //seprate again last digit
    digit = number%10;
    cout<<digit<<",";
    //remaining number
    number = number/10;
    // seprate last digit
    digit = number%10;
    cout<<digit;
}
