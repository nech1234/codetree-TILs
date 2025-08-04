#include <iostream>

using namespace std;

int a, b, c;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int one = n%10;
    int ten = n / 10;
    return sum(ten) + one;
}

int main() {
    cin >> a >> b >> c;

    cout << sum(a*b*c) ;

    return 0;
}