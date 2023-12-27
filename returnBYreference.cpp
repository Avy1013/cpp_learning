#include<iostream>
using namespace std;

struct emp{
    char name[20];
    int age;
    float sal;
};
emp e1 = {"Aman",21,2586.00};
emp e2 = {"Ajay",24,4141.50};
emp &fun();

int main(){
    fun() = e2; // now e1 is equal to e2 as this was passing a reference of e1
    cout<<e1.name<<endl<<e1.age<<endl<<e1.sal<<endl; //prints value of e2
    return 0;

}

emp &fun()
{
    cout<<e1.name<<endl<<e1.age<<endl<<e1.sal<<endl;
    return e1;
}