#include <iostream>
#include<vector>
using namespace std;

string N;

int main() {
    cin >> N;
    vector<int> arr;
    int num = 0;
    for(int i = 0;i<N.size();i++){
        num = num * 2 + N[i] - '0';
    }
    num *= 17;

    while(true){
        if(num == 0){
            break;
        }
        arr.push_back(num%2);
        num/=2;
    }
    if(arr.size() == 0){
        cout << 0;
    }
    for(int i= arr.size()-1;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}