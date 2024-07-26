#include <iostream>
using namespace std;
bool inrange(int x, int y, int n){
    return(0<=x&&x<n&&0<=y&&y<n);
}

int main() {
    int n, t;
    cin >> n >> t;
    int arr[n][n];
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c;
            cin >> c;
            arr[i][j] = c;
        }
    }
    int x = n/2;
    int y = n/2;
    int dir_num = 1;
    int count = arr[x][y];
    int dx[4] = {0,-1,0,1};
    int dy[4] = {-1,0,1,0};
    for(int i=0;i<s.size();i++){
        if(s[i] == 'R'){
            dir_num = dir_num+1;
            if(dir_num>3){
                dir_num = 0;
            }
        }
        if(s[i] == 'L'){
            dir_num = dir_num - 1;
            if(dir_num<0){
                dir_num = 3;
            }
        }
        if(s[i] == 'F'){
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];
            if(inrange(nx, ny, n)){
                x = nx;
                y = ny;
                count += arr[x][y];
            }
            else{
                continue;
            }
        }
    }
    cout << count;
    return 0;
}