#include <iostream>

using namespace std;

int N;

int odd(int n){
    if(n == 1){
        return 1;
    }
    return odd(n-2) + n;
}

int even(int n){
    if(n == 0){
        return 0;
    }
    return even(n-2) + n;
}

int main() {
    cin >> N;

    if(N%2 == 0){
        cout << even(N);
    }
    else{
        cout << odd(N);
    }

    return 0;
}