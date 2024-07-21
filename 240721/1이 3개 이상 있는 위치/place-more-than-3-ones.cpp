#include <iostream>
using namespace std;

bool inrange(int x, int y,int n){
    return(x>=0 && x<n && y>=0 && y<n);
}

int main() {
    int n;
    int total = 0;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int ct = 0;
            if(inrange(i-1,j,n)&&arr[i-1][j]==1){
                ct++;
            }//서쪽
            if(inrange(i+1,j,n)&&arr[i+1][j]==1){
                ct++;
            }//동쪽
            if(inrange(i,j-1,n)&&arr[i][j-1]==1){
                ct++;
            }//남쪽
            if(inrange(i,j+1,n)&&arr[i][j+1]==1){
                ct++;
            }//동쪽
            if(ct>=3){
                total++;
            }
        }
    }
    cout << total;
    return 0;
}