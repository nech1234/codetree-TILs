#include <iostream>
#include<tuple>
#include<algorithm>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

bool comp(tuple<string, int, int> a, tuple<string, int, int> b){
    if(get<1>(a) == get<1>(b)){
        return get<2>(a) > get<2>(b);
    }
    return get<1>(a) < get<1>(b);
}

int main() {
    cin >> n;
    tuple <string, int, int> people[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        people[i] = make_tuple(name[i],height[i],weight[i]);
    }
   
    sort(people,people+n,comp);
    
    for (int i = 0; i < n; i++) {
        cout << get<0>(people[i]) << " " <<get<1>(people[i]) << " " << get<2>(people[i]) << "\n";
    }
    return 0;
}