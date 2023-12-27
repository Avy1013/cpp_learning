#include <iostream>
using namespace std;
int can_be_function(){
    return 0;
}
int sum(int a,int b=10,int c= can_be_function()){ 
// can be defined only in trailing values or the last values not at the start or middle
// also function can be used as default value
    return 0;
}
float sum(int a,double b=10.1){
    return 0;
}
int main(){
    int a = 1;
}
