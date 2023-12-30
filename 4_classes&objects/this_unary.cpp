#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer(int n) : value(n){};
 // Overloading pre-increment operator
    Integer& operator++() {
        ++value;      // Increment the value
        return *this; // Return the updated object by reference
    }
    // Overloading post-increment operator
    Integer operator++(int) {
        Integer temp(value); // Create a copy of the current object
        value++;            // Increment the value
        return *this;       // Return the current object using the this pointer
   }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Integer num(5);
    
    num.display(); // Output: Value: 5
    Integer result2 =++num;//using the pre-increment operator
    Integer result = num++; // Using the post-increment operator
    result2.display(); 
    result.display(); 
    num.display();   
    
    return 0;
}
