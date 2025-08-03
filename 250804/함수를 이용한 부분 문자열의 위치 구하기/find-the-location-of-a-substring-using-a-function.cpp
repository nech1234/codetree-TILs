#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int main() {
    cin >> text;
    cin >> pattern;

    cout << (int)text.find(pattern);

    return 0;
}