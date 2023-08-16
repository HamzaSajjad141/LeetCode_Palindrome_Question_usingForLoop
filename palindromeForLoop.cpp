#include <iostream>
#include <string>

using namespace std;

// Function to check if a given integer is a palindrome
bool isPalindrome(int number) {
    // Convert the integer to a string for easier comparison
    string numStr = to_string(number);
    int length = numStr.length();

    // Compare characters from both ends of the string
    for (int i = 0; i < length / 2; i++) {
        // If characters don't match, it's not a palindrome
        if (numStr[i] != numStr[length - i - 1]) {
            return false;
        }
    }

    // If the loop completes, the number is a palindrome
    return true;
}

int main() {
    int num;
    bool isPal;

    // Prompt the user to input a number
    cout << "Enter the number to check if it's a palindrome: ";
    cin >> num;

    // Call the isPalindrome function to check if the number is a palindrome
    isPal = isPalindrome(num);

    // Display the result
    cout << "Is the number a palindrome? ";
    if (isPal) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0; // Indicate successful program execution
}
