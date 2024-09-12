#include <iostream>
#include <string>
using namespace std;

string substring(string n, string ans) {
    if (n.size() == 0) {
        return ans;
    }

    char ch = n[0];
    string ros = n.substr(1);

    return substring(ros, ans + ch);
}

int main() {
    cout << substring("abc", "") << endl;
    return 0;
}
