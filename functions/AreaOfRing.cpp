// write a function to calculate the area of ring

#include <iostream>
using namespace std;
int ringArea(double);
int main(){
    int rad1;
    int rad2;
    double area;
    cout<<"please enter the radius of inner ring ";
    cin>>rad1;
    cout<<"please enter the radius of outer ring ";
    cin>>rad2;
    area = ringArea(rad1)-ringArea(rad2);
    cout<<"area of ring with inner radius "<<rad1<<"and the outer radius "<<rad2<<"is: "<<area;
}
int ringArea(double radius){
    return (3.14 * radius * radius);
}