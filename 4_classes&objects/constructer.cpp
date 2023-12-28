#include <iostream>
using namespace std;

class integer{
    private:
     int a;
     public:
     void getdata(int m){
        a = m;
     }
     integer(){
     }
     integer(int m){
        a = m;
     }
     void display(){
        cout << a<<endl;
      
     }
     // showcasing function overloading
     void addinteger(integer m,integer n){
        a = m.a + n.a; // accesing objects data through this
     }
     integer addinteger(integer p){ // function overloading
        integer temp;   
        temp = a + p.a;
        return temp;
     }
     integer operator+(integer y){ // operator overloading 
        integer temp;
        temp.a = a + y.a+1;
        return temp;
     }
    //   ~integer(){   // a destructer 
    //          cout << "this message is shown by a destructer"<<a<<endl;
       
    //  }
};
int main(){
    integer i1(5),i2,i3,i4,i5;
    i2.getdata(6);

    // different types of function adding
    i3.addinteger(i1,i2);
    i3.display();

    i4 = i1.addinteger(i2);
    i4.display();

    i5 = i1 + i2;
    i5.display();
}