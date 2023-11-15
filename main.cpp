#include <iostream>

using namespace std;

int main() {
    string value;
    cout << "Enter the string: ";
    cin >> value;
    for (auto it = value.rbegin(); it != value.rend(); ++it) {
        cout << *it;
    }
    return 0;
}
