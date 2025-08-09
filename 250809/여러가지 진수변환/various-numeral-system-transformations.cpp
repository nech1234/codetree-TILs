#include <iostream>
#include<vector>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;
    vector<int> arr;
    while(true){
        if(N == 0){
            break;
        }
        arr.push_back(N%B);
        N /= B;
    }
    if(arr.size() == 0){
        cout << 0;
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}