//inline function help us when we call the function it gets replaced by inline function during compilation.
// it removes the time of calling a function
// Normally used when code is small in function
#include<iostream>
using namespace std;

inline void increment(int a){
    a=a+1;
    cout<< "incremented number is: "<<a<<endl;
}
int main(){
    int number;
    cout<<"give the number: ";
    cin >> number;
    increment(number);
}