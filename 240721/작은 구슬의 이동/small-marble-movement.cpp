#include <iostream>
using namespace std;

bool inrange(int x, int y, int n1){
    return(1<=x&&x<=n1&&1<=y&&y<=n1);
}

int main() {
    int n1, n2,x,y;
    char dir;
    int dx,dy;
    cin >> n1 >> n2 >> x >> y >> dir;
    if(dir == 'U'){
        dy=0;
        dx=-1;
    }
    if(dir == 'D'){
        dy=0;
        dx=1;
    }
    if(dir == 'R'){
        dy=1;
        dx=0;
    }
    if(dir == 'L'){
        dy=-1;
        dx=0;
    }
    for(int i=0;i<n1;i++){
        int nx = x+dx;
        int ny = y+dy;
        if(inrange(nx,ny,n1)){
            x=nx;
            y=ny;
        }
        else{
            dx=-dx;
            dy=-dy;
        }
    }
    cout << x << ' ' << y;
    return 0;
}