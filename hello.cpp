#include<iostream> //input-output stream
#include <typeinfo> // give the info of type

using namespace std; // std refers to standard library of c++ and namespace collection of indentifiers

int main(){
    int first;
    cout << "enter a no." ; //cout=std output stream ; << corresponds to "put to"
    cin >> first;  // std input stream
    auto common="Automatically Recognizes The Data Type: ";
    decltype (common)str="string"; //copies the type of common //str is name of variable
    auto stringe = typeid(str).name(); //used to tell the data type
    cout  << common << " " << str << " " << "  TYPE ID: " << stringe << endl;
    cout << "'"<< first <<"'"<< " " << "The no. you entered";
}