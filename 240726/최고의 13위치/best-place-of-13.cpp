#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            int cur_count = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            if(cur_count>count){
                count = cur_count;
            }
        }
    }
    cout << count;
    return 0;
}