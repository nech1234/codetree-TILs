#include <iostream>
#include<algorithm>
using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums,nums+2*N);
    int arr1[N];
    int arr2[N];
    for (int i = 0; i < N; i++) {
        arr1[i] = nums[i];
    }
    for (int i = N; i < 2*N; i++) {
        arr2[i-N] = nums[i];
    }
    int result = 0;
    for (int i = 0; i < N; i++) {
        result = max(result,(arr1[i]+ arr2[N-i-1]));
    }
    cout << result;

    return 0;
}
