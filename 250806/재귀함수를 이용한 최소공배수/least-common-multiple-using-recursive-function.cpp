#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b){
    while(a%b>0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}
int lcm(int a,int cnt){
    if(cnt == n){
        return a;
    }
    int lcm1 = a * arr[cnt]/gcd(a,arr[cnt]); 
    return lcm(lcm1,cnt+1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << lcm(arr[0],1);

    return 0;
}