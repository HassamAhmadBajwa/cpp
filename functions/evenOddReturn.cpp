// write a function which that a given number is even or odd it should return true if even and false if odd.

#include<iostream>
using namespace std;
int evenOdd(int);
int main(){
    int number;
    cout<<"please enter the number ";
    cin>>number;
    if(evenOdd(number)){
        cout<<"the number is even ";
    }else{
        cout<<"the number is odd ";
    }
}
int evenOdd(int num){
    if(num%2==0){
        return true;
    }else{
        return false;
    }
}