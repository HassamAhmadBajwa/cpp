// write a program to print the table of the given number

#include <iostream>
using namespace std;
int main(){
    int number,table;
    cout<<"Please enter the number for the table ";
    cin>>number;
    // code for the print of table
    for(int i=0; i<=10; i++){
        table = number * i;
        cout<<number<<" * "<<i<<" = "<<table<<endl;
    }
}