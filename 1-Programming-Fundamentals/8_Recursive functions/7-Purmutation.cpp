#include <iostream>
using namespace std;

// Function to generate permutations of a string
void permutation(string str, string ans) {
    // Base case: If the input string is empty, print the result
    if (str.length() == 0) {
        cout << ans << endl;
        return;
    }

    // Recursive case: Iterate through each character in the string
    for (int i = 0; i < str.length(); i++) {
        // Select the current character
        char ch = str[i];
        // Form the remaining string after removing the current character
        string ros = str.substr(0, i) + str.substr(i + 1);
        // Recursively generate permutations with the remaining string
        permutation(ros, ans + ch);
    }
}

int main() {
    string name;
    cout << "Please enter a string: ";
    cin >> name;
    permutation(name, "");
    return 0;
}
