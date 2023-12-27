#include<iostream> //input-output stream
#include <typeinfo> // give the info of type

using namespace std; // std refers to standard library of c++ and namespace collection of indentifiers
int first = 10; // golbal variable
// void func() {
//     if (__cplusplus == 202002L) std::cout << "C++20\n";
//     else if (__cplusplus == 201703L) std::cout << "C++17\n";
//     else if (__cplusplus == 201402L) std::cout << "C++14\n";
//     else if (__cplusplus == 201103L) std::cout << "C++11\n";
//     else if (__cplusplus == 199711L) std::cout << "C++98\n";
//     else std::cout << "pre-standard C++\n";
// }
int main(){
    int first(8); // another type of intilization
    // func();
    cout << "enter 2 no." ; //cout=std output stream ; << corresponds to "put to"
    cin >> first;  // std input stream
    cin >> ::first;
    auto common="Automatically Recognizes The Data Type: ";
    decltype (common)str="string"; //copies the type of common //str is name of variable
    auto stringe = typeid(str).name(); //used to tell the data type
    cout  << common << " " << str << " " << "  TYPE ID: " << stringe << endl;
    cout << "'"<< first <<"'"<< " " << "The no. you entered"<<endl<<::first<<"Global first";
    return 0;
}
