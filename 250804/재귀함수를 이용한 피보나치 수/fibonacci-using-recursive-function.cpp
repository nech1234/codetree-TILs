#include <iostream>

using namespace std;

int N;

int func(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return func(n-2) + func(n-1);
}

int main() {
    cin >> N;

    cout << func(N);

    return 0;
}