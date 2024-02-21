// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(string str){

    // Write your code here
    string sthalf = "";
    for (int i = 0; i < floor(str.length() / 2); i++) {
        sthalf += str[i];
    }

    string ndhalf = "";
    for (int i = str.length(); i < ceil(str.length() / 2); i--) {
        ndhalf += str[i];
    }
    if (sthalf == ndhalf) {
        return true;
    } else {
        return false;
    }
}

// Main function
int main(){
    string s;
    cout << "Enter a string: " << flush;
    getline(cin,s);
    cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}
