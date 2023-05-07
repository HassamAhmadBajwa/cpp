//Write a program that takes radius of a circle from the user and calculates the diameter,
//	circumference and area of the circle and display the result.

#include<iostream>
using namespace std;
int main(){
    float radius, diameter, circumference, area;
    float pi = 3.14;
    cout<<"please enter the radius of the circle "<<"";
    cin>>radius;
    // calculate the diameter of the circle
    diameter = 2 * radius;
    cout<<"The diameter of the circle is: "<<diameter<<endl;
    // calculate the circumference of the circle
    circumference = 2 * pi * radius;
    cout<<"The circumference of the circle is: "<<circumference<<endl;
    // calculate the area of the circle 
    area = pi * radius * radius;
    cout<<"The area of the circle is: "<<area<<endl;
}