#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int result = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]<=arr[j]&&arr[j]<=arr[k]){
                    result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}