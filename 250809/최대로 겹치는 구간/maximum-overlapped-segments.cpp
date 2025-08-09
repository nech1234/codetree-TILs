#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int arr[201] = {0};

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j = x1[i] + 100;j<=x2[i] + 100;j++){
            arr[j]++;
        }
    }
    int result = 0;
    for(int i=1;i<201;i++){
        if(result < arr[i]){
            result = arr[i];
        }
    }
    cout << result;

    // Please write your code here.

    return 0;
}