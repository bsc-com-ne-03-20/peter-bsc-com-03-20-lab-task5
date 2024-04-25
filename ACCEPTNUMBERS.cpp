#include <iostream>
#include <limits> // For numeric_limits

using namespace std;
int main() {
    int userInput;
    
    // enter integer between 5-10
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        
        // Check if the input is a valid integer
        if (!(cin >> userInput)) {
            // If not, clear the input buffer and ignore invalid input
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer value." << endl;
            continue; // Restart the loop to prompt again
        }
        
        // Check if the input is between 5 and 10
        if (userInput >= 5 && userInput <= 10) {
            break; // Exit the loop if valid input is entered
        } else {
            cout << "Please enter an integer value between 5 and 10." << endl;
        }
    }
    
    // Output to inform the user that their input value has been accepted
    cout << "Your input value (" << userInput << ") has been accepted." << endl;
    
    return 0;
}
