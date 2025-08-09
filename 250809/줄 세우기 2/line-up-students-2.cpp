#include <iostream>
#include<algorithm>
#include<tuple>
using namespace std;

int N;
int h[1000];
int w[1000];

bool comp(tuple<int,int,int> a, tuple<int,int,int> b){
    if(get<0>(a) == get<0>(b)){
        return get<1>(a) > get<1>(b);
    }
    return get<0>(a) < get<0>(b);
}

int main() {
    cin >> N;
    tuple<int,int,int> arr[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        arr[i] = make_tuple(h[i],w[i],i+1);
    }
    sort(arr,arr+N,comp);
    for (int i = 0; i < N; i++) {
        cout << get<0>(arr[i]) <<" " << get<1>(arr[i]) <<" " << get<2>(arr[i]) <<"\n";
    }

    // Please write your code here.

    return 0;
}