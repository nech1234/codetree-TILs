#include <iostream>

using namespace std;

int m1, d1, m2, d2;
int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string days[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

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

    int total_day = MonOfDay(m2,d2) - MonOfDay(m1,d1) + 1;
    if(total_day<0){
        total_day = MonOfDay(m1,d1) - MonOfDay(m2,d2) - 1;
    }

    cout << days[total_day%7];

    return 0;
}