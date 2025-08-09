#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N;
int sequence[1000];

bool comp(pair<int,int> a,pair<int,int> b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first < b.first;
}

int main() {
    cin >> N;
    pair<int,int> arr1[N];
    int arr2[N];
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        arr1[i] = {sequence[i],i};
    }
    sort(arr1,arr1+N,comp);
    for(int i=0;i<N;i++){
        arr2[arr1[i].second] = i+1;
    }
    for(int i=0;i<N;i++){
        cout << arr2[i] << " ";
    }
    // Please write your code here.

    return 0;
}
