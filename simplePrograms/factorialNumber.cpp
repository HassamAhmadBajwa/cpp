//write a program that calculate the factorial of the given number

#include<iostream>
using namespace std;
int main(){
    int number, factorial, uperlimit;
    factorial = 1;
    number = 1;
    cout<<"Please enter the uperlimit number ";
    cin>>uperlimit;
    // calculate the factorial of uperlimit number
    while (number<=uperlimit)
    {
        if(uperlimit==0){
            cout<<"The factorial of the number is "<< 1;
        }else{
            factorial = factorial * number;
            number++;
        }
    }
    cout<<"the factorial of number is "<< factorial;
}