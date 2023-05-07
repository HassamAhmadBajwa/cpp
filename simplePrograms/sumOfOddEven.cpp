// write a program to calculate the sum of odd integer from a uperlimit number

#include<iostream>
using namespace std;
int main(){
    int uperlimit, sum;
    sum = 0;
    cout<<"Please enter the uper limit number ";
    cin>>uperlimit;
    // calculate the sum of odd numbers
    for(int i=0; i<=uperlimit; i++){
        if(i%2==1){
            sum = sum + i;
        }
    } 
    cout<<"The sum of odd number of uperlimit is: "<<sum;
}