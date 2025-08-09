#include <iostream>

using namespace std;

int m1, d1, m2, d2;
int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int MonOfDay(int m, int d){
    int result = 0;
    for(int i=0;i<m;i++){
        result+=arr[i];
    }
    result+=d;
    return result;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int diff = MonOfDay(m2, d2) - MonOfDay(m1, d1);
    diff = (diff % 7 + 7) % 7;

    cout << days[diff];

    return 0;
}