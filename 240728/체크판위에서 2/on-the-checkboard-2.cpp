#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char c;
            cin >> c;
            arr[i][j] = c;
        }
    }
    int x = 0, y = 0, count = 0;
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            for(int k=i+1;k<r-1;k++){
                for(int l=j+1;l<r-1;l++){
                    if(arr[0][0] != arr[i][j] && arr[i][j] != arr[k][l] && arr[k][l] != arr[r-1][c-1]){
                        count++;
                    }
            }   
            }
        }
    }
    cout << count;
    return 0;
}