#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // Declare a stringstream object
    stringstream ss;

    // Write data to the stringstream
    int num = 25;
    double value = 3.14;
    string text = "Hello, world!";

    ss << "Integer number: " << num << "\n";
    ss << "Double value: " << value << "\n";
    ss << "Text: " << text;

    // Extract the string from the stringstream
    string result = ss.str();

    // Output the content of the stringstream
    cout << "Content of the stringstream:\n" << result << endl;

    // Reading from a string and extracting data using stringstream
    string input = "50 3.14159 Hello";
    int extractedInt;
    double extractedDouble;
    string extractedString;

    stringstream input_ss(input);
    input_ss >> extractedInt >> extractedDouble >> extractedString;

    // Display the extracted values
    cout << "\nExtracted values:\n";
    cout << "Integer: " << extractedInt << endl;
    cout << "Double: " << extractedDouble << endl;
    cout << "String: " << extractedString << endl;

    return 0;
}
