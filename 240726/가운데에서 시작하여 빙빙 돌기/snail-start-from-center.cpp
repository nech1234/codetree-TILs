#include <iostream>
using namespace std;

bool inrange(int x, int y, int n){
    return(0<=x&&x<n&&0<=y&&y<n);
}
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    int x = n-1;
    int y = n-1;
    int dx[4] = {0,-1,0,1};
    int dy[4] = {-1,0,1,0};
    int dir_num = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    for(int i=n*n;i>=1;i--){
        arr[x][y] = i;
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        if(inrange(nx,ny,n)&&arr[nx][ny] == 0){
            x = nx;
            y = ny;
        }
        else{
            dir_num = (dir_num+1)%4;
            x = x + dx[dir_num];
            y = y + dy[dir_num]; 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}