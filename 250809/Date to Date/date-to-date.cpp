#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int result = 1;
    while(true){
        if(m1 == m2 && d1 == d2){
            break;
        }
        result++;
        d1++;
        if(d1 == arr[m1]){
            m1++;
            d1 = 0;
        }
    }
    cout << result;

    return 0;
}