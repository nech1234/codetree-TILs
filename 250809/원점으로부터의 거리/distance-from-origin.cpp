#include <iostream>
#include<algorithm>
using namespace std;

int N;
int x[1000];
int y[1000];

bool comp(pair<int,int> a,pair<int,int> b ){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    cin >> N;
    pair<int,int> arr[N];

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        if(x[i]<0){
            x[i] *=-1;
        }
        if(y[i]<0){
            y[i] *=-1;
        }
        arr[i] = {i+1,x[i] + y[i]};
    }

    sort(arr, arr+N,comp);

    for (int i = 0; i < N; i++) {
        cout << arr[i].first << "\n";
    }

    return 0;
}
