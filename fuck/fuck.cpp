#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    if (name.empty()) {
        cout << "You didn't enter a name!" << endl;
    } else {
        cout << "Hello, " << name << "!" << endl;
    }
}