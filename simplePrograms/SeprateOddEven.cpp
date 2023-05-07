// calculate the sum of even and odd number seprately for a given uper limit with one loop

#include <iostream>
using namespace std;
int main(){
    int uperlimit, even, odd;
    even = 0;
    odd = 0;
    cout<<"Please enter the uper limit number ";
    cin>>uperlimit;
    // calculate the sum of even and odd
    for(int i=0; i<=uperlimit; i++){
        if(i%2==0){
            even = even + i;
        }else if(i%2==1){
            odd = odd +i;
        }
    }
    cout<<"The sum of even numbers "<<even<<endl;
    cout<<"The sum of odd numbers "<<odd;
}