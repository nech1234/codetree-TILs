#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool cur = false;
    do{
        cur = true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                cur = false;
            }
        }
    }while(cur == false);

    for(int i=0;i<n;i++){
        cout << arr[i] << ' ';
    }

    return 0;
}