#include <iostream>
using namespace std;

int N;

int sum(int n){
    if(n / 10 == 0){
        return 0;
    }
    int ten = n/10;
    int one = n%10;
    return(one*one + sum(ten));
}

int main() {
    cin >> N;

    cout << sum(N);

    return 0;
}