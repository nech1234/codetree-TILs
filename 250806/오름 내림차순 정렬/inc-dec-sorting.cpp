#include <iostream>
#include<algorithm>

using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+n);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << ' ';
    }
    cout << "\n";
    for (int i = n-1; i >=0 ; i--) {
        cout << nums[i] << ' ';
    }

    return 0;
}
