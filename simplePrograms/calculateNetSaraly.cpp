/*A shopkeeper announces a package for customers that he will give 10 % discount on
	all bills and if a bill amount is greater than 5000 then a discount of 15 %. Write a C
	program which takes amount of the bill from user and calculates the payable amount*/

#include<iostream>
using namespace std;
int main(){
    int amount, discount, net_payable;
    cout<<"Please enter the shoping amount ";
    cin>>amount;
    // condition statement to calculate the discount
    if(amount>5000){
        discount = (amount * 15)/100;
        net_payable =  amount - discount;
    }else{
        discount = (amount*10)/100;
        net_payable = amount - discount;
    }
    cout<<"net_payable amount is: "<<net_payable;
}