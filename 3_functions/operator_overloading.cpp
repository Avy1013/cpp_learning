#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct complex
{
    double x;
    string i;
};
complex operator+(complex no1,complex no2){
      complex temp;
      temp.x = no1.x + no2.x;
      temp.i = no1.i + no2.i;
      return temp;
}

     
int main(){
    string temp,temp2;
    complex complex1,complex2,t;
    cout<<"give first complex number :  ";
    cin >> temp;
    cout<<"addition: "<<temp<<endl;
    cout<<"give second complex number :  ";
    cin >> temp2;
    cout<<"addition: "<<temp2<<endl;
    stringstream input_s1(temp);
    stringstream input_s2(temp2);
    input_s1 >> complex1.x >> complex1.i;
    cout<< complex1.x <<"\t"<<complex1.i<<endl;
    input_s2 >> complex2.x >> complex2.i;
    cout<< complex2.x <<"\t"<<complex2.i<<endl;
    t = complex1 + complex2;
    cout<<"addition: "<<t.x<<t.i<<endl;
    return 0;
}
