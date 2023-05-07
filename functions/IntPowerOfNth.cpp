// calculate the integer power of n number

#include<iostream>
using namespace std;
int power(int num, int pow);

int power(int num, int pow)
{
    double result = 1;
    for(int i=1; i<=pow; i++){
        result = result * num;
    }
    return (result);
}
int main(){
    int number;
    int power_number;
    cout<<"please enter the number "<<number;
    cin>>number;
    cout<<"please enter the raise to power number "<<power_number;
    cin>>power_number;
    cout<<"The "<<number<<" raise to power "<<power_number<<" is "<< power(number, power_number);
}