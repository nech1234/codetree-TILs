#include <iostream>

using namespace std;

int n;
int arr[100];

int max(int curMax, int idx){
    if(idx == n){
        return curMax;
    }
    if(curMax < arr[idx]){
        return max(arr[idx],idx+1);
    }
    return max(curMax,idx+1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max(arr[0],1);

    return 0;
}