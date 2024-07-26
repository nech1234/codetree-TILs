#include <iostream>
#include<cstdlib>
#include<climits>
using namespace std;

int minDistance(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    int result = INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    for(int i=0;i<n;i++){
        int house = arr[i];
        int cur_distance = 0;
        for(int j=0;j<n;j++){
            cur_distance+=arr[j]*abs(i-j);
        }
        result = minDistance(result, cur_distance);
    }
    cout << result;
    return 0;
}