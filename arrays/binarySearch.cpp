// write a program to binary seach of the number in array


#include <iostream>
using namespace std;
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int num, mid, start,end, found;
    found = -1;
    start = 0; 
    end = 9;
    cout<<"please enter the number ";
    cin>>num;
    // find the index of given number 
    while(start<=end){
        mid = (start+end)/2;
        if(num==array[mid]){
            found = mid;
            break;
        }else if(num<array[mid]){
            end = mid -1;
        }else{
            start = mid + 1;
        }
    }
    if(found == -1){
        cout<<"the number is not found ";
    }else{
        cout<<"the number is found at the index of "<<found;
    }
}