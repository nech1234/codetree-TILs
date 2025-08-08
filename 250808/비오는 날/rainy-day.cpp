#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

class RainDay{
private:
    string date;
    string day;
    string weather;
public:
    RainDay(string date, string day, string weather){
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    string getDate(){
        return this->date;
    }
    string getDay(){
        return this->day;
    }
    string getWeather(){
        return this->weather;
    }
};

RainDay getFind(vector<RainDay> raindays){
    RainDay minDay = raindays[0];
    for(int i=0;i<raindays.size();i++){
        if(minDay.getDate() > raindays[i].getDate()){
            minDay = raindays[i];
        }
    }
    return minDay;
}

int main() {
    cin >> n;
    vector<RainDay> raindays;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        if(weather[i] == "Rain"){
            raindays.push_back(RainDay(date[i],day[i],weather[i]));
        }
    }
    RainDay minDay = getFind(raindays);
    cout << minDay.getDate() << " " << minDay.getDay() << " " << minDay.getWeather();

    // Please write your code here.

    return 0;
}