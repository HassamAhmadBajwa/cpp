// The program gets a grade from the user and display the description result

#include <iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Please enter the student grade ";
    cin>>grade;
    switch(grade){
        case 'a':
        case 'A':
        cout<<"excellent result";
        break;
        case 'b':
        case 'B':
        cout<<"very good result";
        break;
        case 'c':
        case 'C':
        cout<<"good result";
        break;
        case 'd':
        case 'D':
        cout<<"bad result";
        break;
        case 'e':
        case 'E':
        cout<<"very bad result";
        break;
        case 'f':
        case 'F':
        cout<<"fail result";
        break;
        default:
        cout<<"the enter grade from A to F";
    }
}