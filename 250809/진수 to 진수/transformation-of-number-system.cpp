#include <iostream>
#include<vector>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;
    vector<int>arr;
    int num = 0;
    for(int i=0;i<n.size();i++){
        num = num*a + n[i] - '0';
    }

    while(true){
        if(num == 0){
            break;
        }
        arr.push_back(num%b);
        num /= b;
    }
    for(int i = arr.size()-1;i>=0;i--){
        cout << arr[i];
    }
    return 0;
}