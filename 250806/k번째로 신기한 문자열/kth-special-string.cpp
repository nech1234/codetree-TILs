#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;
    vector<string> arr;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        bool find = true;
        for(int j=0;j<t.size();j++){
            if(t[j] != str[i][j]){
                find = false;
            }
        }
        if(find){
            arr.push_back(str[i]);
        }
    }
    sort(arr.begin(),arr.end());
    cout << arr[k-1];


    return 0;
}