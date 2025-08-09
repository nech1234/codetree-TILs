#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    int arr[101] = {0};

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        if(A[i] == B[i]){
            arr[A[i]]++;
        }
        else{
            for(int j= A[i];j<=B[i];j++){
                arr[j]++;
            }
        }
    }
    int result = 0;
    for(int i = 1;i<101;i++){
        if(result < arr[i]){
            result = arr[i];
        }
    }
    cout << result;

    // Please write your code here.

    return 0;
}