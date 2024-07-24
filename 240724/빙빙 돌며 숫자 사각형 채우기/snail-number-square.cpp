#include <iostream>

using namespace std;

bool inrange(int x, int y, int n, int m) {
    return(0 <= x && x < m && 0 <= y && y < n);
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=0;
        }
    }
    int dx[4] = { 0,1,0,-1 };
    int dy[4] = { 1,0,-1,0 };
    int dir_num = 0;
    int x = 0;
    int y = 0;
    for (int i = 1; i <= n * m; i++) {
        arr[x][y] = i;
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        if (inrange(nx, ny, n, m) && arr[nx][ny] == 0) {
            x = nx;
            y = ny;
        }
        else {
            dir_num = (dir_num + 1) % 4;
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}