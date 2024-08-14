#include <iostream>
#include<algorithm>
using namespace std;

#define MAX_N 100000
int n;
int arr[MAX_N+1];

void heapify(int n, int i){
    int largest = i;
    int l = i*2;
    int r = i*2 +1;

    if(l<=n && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<=n && arr[r]> arr[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(n,largest);
    }
}

void heapSort(){
    for(int i=n/2;i>=1;i--){
        heapify(n,i);
    }
    for(int i=n;i>1;i--){
        swap(arr[1],arr[i]);
        heapify(i-1,1);
    }
}

int main() {
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    heapSort();
    for(int i=1;i<=n;i++){
        cout << arr[i] << ' ';  
    }
    return 0;
}