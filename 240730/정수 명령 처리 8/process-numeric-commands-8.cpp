#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int>li;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        if(s=="push_back"){
            int n;
            cin >> n;
            li.push_back(n);
        }
        if(s=="push_front"){
            int n;
            cin >> n;
            li.push_front(n);
        }
        if(s=="pop_front"){
            int x = li.front();
            cout << x << '\n';
            li.pop_front();
        }
        if(s=="pop_back"){
            int x = li.back();
            cout << x << '\n';
            li.pop_back();
        }
        if(s=="size"){
            cout << li.size() << '\n';
        }
        if(s=="empty"){
            cout << li.empty() << '\n';
        }
        if(s=="front"){
            cout << li.front()<< '\n';
        }
        if(s=="back"){
            cout << li.back()<< '\n';
        }
        
    }
    return 0;
}