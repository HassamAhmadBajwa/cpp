// write a program that calculate the sum of even number between 1 and 10;

#include<iostream>
using namespace std;
int main(){
    int sum , number, uperlimit;
    sum = 0;
    number = 1;
    cout<<"Please enter the uper limit which you want to sum ";
    cin>>uperlimit;
    // calculate the even number between 1 and uperlimits
    while(number<=uperlimit){
        if(number%2==0){
            sum = sum + number;
        }
        number++; 
    }
    cout<<"The sum of first 10 even number is: "<< sum;
}