#include <iostream>
#include <algorithm>
#include<tuple>
using namespace std;

string name[5];
int height[5];
double weight[5];

bool comp(tuple<string, int, double> a, tuple<string, int, double> b){
    return get<1>(a) > get<1>(b);
}

int main() {
    tuple <string, int, double> people[5];
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        people[i] = make_tuple(name[i],height[i],weight[i]);
    }
    sort(people,people+5);
    cout << "name\n";
    for (int i = 0; i < 5; i++) {
        cout << get<0>(people[i]) << " " <<get<1>(people[i]) << " " << get<2>(people[i]) << "\n";
    }
    sort(people,people+5,comp);
    cout << "\n";
    cout << "height\n";
    for (int i = 0; i < 5; i++) {
        cout << get<0>(people[i]) << " " <<get<1>(people[i]) << " " << get<2>(people[i]) << "\n";
    }
    return 0;
}