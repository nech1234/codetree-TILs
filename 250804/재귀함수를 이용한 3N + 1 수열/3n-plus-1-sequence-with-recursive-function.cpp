#include <iostream>

using namespace std;

int n;

int func(int cnt, int n){
    if(n == 1){
        return cnt;
    }
    else if(n%2 == 0){
        return func(cnt+1,n/2);
    }
    else{
        return func(cnt+1,n*3+1);
    }
}

int main() {
    cin >> n;

    cout << func(0,n);

    return 0;
}