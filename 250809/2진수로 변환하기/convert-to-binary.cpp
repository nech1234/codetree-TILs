#include <iostream>
#include<vector>
using namespace std;

int n;

int main() {
    cin >> n;

    vector<int> arr;
    while(true){
        if(n == 0){
            break;
        }
        if(n%2 == 0){
            arr.push_back(0);
        }
        else{
            arr.push_back(1);
        }
        n/=2;
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}