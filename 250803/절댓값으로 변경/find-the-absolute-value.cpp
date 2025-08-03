#include <iostream>

using namespace std;

int n;
int arr[50];

void print(int a[]){
    for(int i=0;i<n;i++){
        if(a[i]<0){
            cout << a[i] * -1 << ' ';
        }
        else{
            cout << a[i]<< ' ';
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    print(arr);

    return 0;
}