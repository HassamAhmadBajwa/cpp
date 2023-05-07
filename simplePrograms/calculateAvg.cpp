// write a program that take the age of the student and calculate the average age
#include<iostream>
using namespace std;
int main(){
    int age1, age2, age3, age4, age5;
    int total_average, total_age;
    cout<<"please enter the age of student 1 ";
    cin>> age1;
    cout<<"please enter the age of student 2 ";
    cin>> age2;
    cout<<"please enter the age of student 3 ";
    cin>> age3;
    cout<<"please enter the age of student 4 ";
    cin>> age4;
    cout<<"please enter the age of student 5 s";
    cin>> age5;
    // calculate the average of the student
    total_age = age1+age2+age3+age4+age5;
    total_average = total_age/5;
    cout<<"total average of the class student is "<<total_average;
}