#include <iostream>
using namespace std;

class rectangle { // similar to structure in c
private:
    int l, b;
public:
    int area_peri() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Parameters entered: " << l << "\t" << b << endl;
        int area = l * b;
        int perimeter = 2 * (l + b);
        // cout << "Area: " << area << endl << "Perimeter: " << perimeter;
        return area;  // Return the calculated area
    }

    int area;  // Member to store the area
};

int main() {
    rectangle r1;
   // r1.area_peri();  //if wanna directly call the function
    r1.area = r1.area_peri();  // Call the function and store the return value
    cout << "Area: " << r1.area << endl;
    return 0;
}
