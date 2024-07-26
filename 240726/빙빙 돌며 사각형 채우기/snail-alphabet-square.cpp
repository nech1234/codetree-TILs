#include <iostream>
using namespace std;

bool inrange(int x, int y, int n, int m){
    return(0<=x&&x<n&&0<=y&&y<m);
}

int main() {
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=0;
        }
    }
    int x{0},y{0},dir_num{0};
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int c = 65;
    for(int i=0;i<n*m;i++){
        arr[x][y] = (char)c;
        c++;
        if(c>90){
            c = 65;
        }
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        if(inrange(nx,ny,n,m)&&arr[nx][ny]==0){
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
        for(int j=0;j<m;j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}