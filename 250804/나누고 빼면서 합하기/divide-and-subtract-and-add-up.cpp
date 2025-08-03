#include <iostream>

using namespace std;

int n, m;
int A[100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int result = 0;
    while(true){
        result += A[m-1];
        if(m%2 == 0){
            m /= 2;
        }
        else{
            m -= 1;
        }
        if(m<1){
            break;
        }
    }
    cout << result;
    return 0;
}