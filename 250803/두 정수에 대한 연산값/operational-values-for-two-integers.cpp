#include <iostream>

using namespace std;

int a, b;

int main() {
    cin >> a >> b;

    if(a>b){
        cout << a+25 << ' ' << b*2;
    }
    else{
        cout << a*2 << ' ' << b+25;
    }

    return 0;
}