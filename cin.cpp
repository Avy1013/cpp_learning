// It could prove usefull if u wanna do something like check if u are able to get inputs
// cin returns the info as bool
//for example
#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";

    while (!(cin >> num)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "You entered: " << num << endl;

    return 0;
}

/* 
Here's a breakdown of cin.ignore(numeric_limits<streamsize>::max(), '\n');:

1. cin.ignore():

This function is used to extract and discard characters from the input stream (cin).
It takes two arguments:
The first argument specifies the maximum number of characters to ignore.
The second argument specifies a delimiter character, up to which characters will be ignored.
2. numeric_limits<streamsize>::max():

This part essentially tells cin.ignore() to ignore as many characters as possible.
numeric_limits is a template class that provides information about the limits of various numerical types.
streamsize is a type used to represent the size of streams (like cin).
max() returns the maximum value that a streamsize can hold, effectively telling cin.ignore() to ignore as many characters as it can.
3. '\n':

This is the delimiter character. It means that cin.ignore() will ignore characters until it encounters a newline character (\n).
In summary, cin.ignore(numeric_limits<streamsize>::max(), '\n'); does the following:

Reads and discards all characters from the input stream (cin) up to and including the next newline character (\n).
It effectively clears the input buffer of any remaining invalid or unwanted characters, ensuring that subsequent input operations start with a clean slate. */


