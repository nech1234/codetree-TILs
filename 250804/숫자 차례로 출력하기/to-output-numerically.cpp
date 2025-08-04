#include <iostream>

using namespace std;

int N;

void printPlus(int n){
    if(n == N+1){
        return;
    }
    cout << n << ' ';
    printPlus(n+1);
}

void printMinus(int n){
    if(n == 0){
        return;
    }
    cout << n << ' ';
    printMinus(n-1);
}
int main() {
    cin >> N;
    printPlus(1);
    cout << "\n";
    printMinus(N);
    return 0;
}