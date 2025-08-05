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
    if(n == 2){
        return 2;
    }
    return func(n/3) + func(n-1);
}

int main() {
    cin >> N;

    cout << func(N);

    return 0;
}