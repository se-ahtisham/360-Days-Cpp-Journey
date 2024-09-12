#include <iostream>
#include <string>
using namespace std;

void reverse(string a) {
    if (a.size() == 0) {
        return;
    } else {
        string ros = a.substr(1);
        reverse(ros);
        cout << a[0];
    }
}

int main() {
    reverse("ahtisham");
    return 0;
}
