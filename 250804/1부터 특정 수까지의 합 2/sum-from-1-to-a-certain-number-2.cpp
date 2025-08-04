#include <iostream>

using namespace std;

int N;

int sum(int N){
    if(N == 0){
        return 0;
    }
    return(N + sum(N-1));
}

int main() {
    cin >> N;
    cout << sum(N);
    return 0;
}