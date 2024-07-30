#include <iostream>
#include<list>
using namespace std;

int main() {
    list<char>li;
    list<char>::iterator it;
    int N,C;
    cin >> N >> C;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        li.push_back(s[i]);
    }
    it = li.end();
    for(int i=0;i<C;i++){
        char c;
        cin >> c;
        if(c=='L'){
            it--;
        }
        if(c=='R'){
            it++;
        }
        if(c=='P'){
            char c;
            cin >> c;
            li.insert(it,c);
        }
        if(c=='D'){
            if(it==li.end()){
                continue;
            }
            else{
                it = li.erase(it);
            }
        }
    }
    for(it = li.begin();it!=li.end();it++){
        cout << *it;
    }
    return 0;
}