#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int arraySize = sizeof(elements) / sizeof(elements[0]);

    // Iterate through the array and checking if starts with B
    for (int i = 0; i < arraySize; ++i) {
        if (elements[i][0] == 'B') {

            // Output that starts with 'B'
            cout << elements[i] << endl;
        }
    }

    return 0;
}
