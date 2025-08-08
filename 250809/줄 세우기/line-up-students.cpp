#include <iostream>
#include <tuple>
#include<algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];

bool comp(tuple<int,int,int> a, tuple<int,int,int> b){
    if(get<0>(a) == get<0>(b)){
        if(get<1>(a) == get<1>(b)){
            return get<2>(a) < get<2>(b);
        }
        return get<1>(a) > get<1>(b);
    }
    return get<0>(a) > get<0>(b);
}

int main() {
    cin >> N;
    tuple<int,int,int> people[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        people[i] = make_tuple(h[i],w[i],i+1);
    }
    sort(people, people+N,comp);
    for (int i = 0; i < N; i++) {
        cout << get<0>(people[i]) << " " << get<1>(people[i]) << " " << get<2>(people[i]) << "\n";
    }

    return 0;
}
