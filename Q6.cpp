#include<iostream>
 
using namespace std;
 
class Time {
    int hour;
    int minute;
    int second;
public:
    void getData(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
 
    void display() {
        cout << hour << " hours " << minute << " minutes " << second << " second" << endl;
    }
 
    void sum(Time, Time);
};
 
void Time::sum(Time t1, Time t2) {
    second = t1.second + t2.second;
    minute = second / 60;
    second = second % 60;
    minute = minute + t1.minute + t2.minute;
    hour = minute / 60;
    minute = minute % 60;
    hour = hour + t1.hour + t2.hour;
};
 
int main() {
    Time t1, t2, t3;
    t1.getData(2, 40, 35);
    t2.getData(3, 45, 36);
    t3.sum(t1, t2);
    cout << "t1=";
    t1.display();
    cout << "t2=";
    t2.display();
    cout << "t3(sum)=";
    t3.display();
    return 0;
}
