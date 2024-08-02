#include <iostream>
#include <cctype> // For isalpha and isdigit functions

using namespace std;

void analyzeString(const string &inputString) {
    int vowels = 0;
    int consonants = 0;
    int uppercaseLetters = 0;
    int lowercaseLetters = 0;
    int specialCharacters = 0;

    for (char ch : inputString) {
        if (isalpha(ch)) {
            // Check for vowels and consonants
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }

            // Check for uppercase and lowercase letters
            if (isupper(ch)) {
                uppercaseLetters++;
            } else {
                lowercaseLetters++;
            }
        } else {
            // Count special characters (non-alphabetic)
            specialCharacters++;
        }
    }

    // Display the results
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Uppercase Letters: " << uppercaseLetters << endl;
    cout << "Lowercase Letters: " << lowercaseLetters << endl;
    cout << "Special Characters: " << specialCharacters << endl;
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    analyzeString(inputString);

    return 0;
}

