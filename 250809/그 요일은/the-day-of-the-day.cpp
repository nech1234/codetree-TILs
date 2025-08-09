#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;
int arr[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
string days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int MonOfDay(int m, int d){
    int result = 0;
    for(int i=1;i<m;i++){
        result+= arr[i];
    }
    result+=d;
    return result;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;
    
    int startDay = MonOfDay(m1,d1);
    int endDay = MonOfDay(m2,d2);
    int result = 0;
    for(int i=startDay;i<=endDay;i++){
        if(days[(i-startDay)%7] == A){
            result++;
        }
    }
    cout << result;

    return 0;
}