#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    if((a-11)*24*60 + (b-11)*60 + (c -11) < 0){
        cout << -1;
    }
    else{
        cout << (a-11)*24*60 + (b-11)*60 + (c -11);
    }

    return 0;
}