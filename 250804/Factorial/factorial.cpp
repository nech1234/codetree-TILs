#include <iostream>

using namespace std;

int N;
int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    cin >> N;

    cout << fact(N);

    return 0;
}