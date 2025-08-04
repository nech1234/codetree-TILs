#include <iostream>

using namespace std;

int N;

int func(int n,int cnt){
    if(n == 1){
        return cnt;
    }
    if(n%2 == 0){
        return func(n/2,cnt+1);
    }
    else if(n%2 == 1){
        return func(n/3,cnt+1);
    }
}

int main() {
    cin >> N;

    cout << func(N,0);

    return 0;
}