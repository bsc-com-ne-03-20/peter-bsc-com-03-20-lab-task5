#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string capitalized = str;
    bool capitalizeNext = false;
    for (char& c : capitalized) {
        if (isspace(c)) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
    return capitalized;
}

int main() {
    ifstream file("text_file.txt");
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);
    file.close();

    // (iii) Count vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // (iv) Count words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // (v) Reverse the statement
    string reversedStatement = reverseString(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    // (vi) Capitalize second letter of each word
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized statement: " << capitalizedStatement << endl;

    return 0;
}
