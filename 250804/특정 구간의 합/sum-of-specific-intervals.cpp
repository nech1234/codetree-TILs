#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        int result = 0;
        for(int j = a1;j<=a2;j++){
            result += arr[j-1];
        }
        cout <<result << "\n";
    }

    return 0;
}