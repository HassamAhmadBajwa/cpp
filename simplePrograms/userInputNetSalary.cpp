// get salary input from the user and calculate net payable after the deduction of the tax

#include <iostream>
using namespace std;
int main(){
    int salary, netSalary, deduction;
    cout<<"Please enter the salary ";
    cin>>salary;
    if(salary<10000){
        deduction = 0;
        netSalary = salary;
        
    }else if(salary>=10000 && salary<20000){
        deduction = (salary*7)/100;
        netSalary = salary - deduction;
    }else{
        deduction = (salary*15)/100;
        netSalary = salary - deduction;
    }
    
    cout<<"fixed salay is "<<salary<<endl;
    cout<<"tax on salary "<<deduction<<endl;
    cout<<"the net salary is "<<netSalary;
}