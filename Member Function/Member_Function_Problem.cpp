#include <bits/stdc++.h>
using namespace std;

class Time
{
    int hours,minutes,seconds;
public:
    void setterhours(int hour)
    {
        hours=hour;
    }
    void setterminutes(int minute)
    {
        minutes=minute;
    }
    void setterseconds(int s)
    {
        seconds=s;
    }
    int differencehrs(int hrs);
    int differencemins(int mins);
    int differencesecs(int secs);
};

int Time::differencehrs(int hrs)
{
    return abs(hrs-hours);
}
int Time::differencemins(int mins)
{
    return abs(mins-minutes);
}
int Time::differencesecs(int secs)
{
    return abs(secs-seconds);
}

int main()
{
    Time T1;
    int hours1,minutes1,seconds1,hours2,minutes2,seconds2;
    cout << "Enter hours, minutes, seconds for 1st city: ";
    cin >> hours1 >> minutes1 >> seconds1;
    T1.setterhours(hours1);
    T1.setterhours(minutes1);
    T1.setterhours(seconds1);
    cout << "\nEnter hours, minutes, seconds fir 2nd city: ";
    cin >> hours2 >> minutes2 >> seconds2;
    /*T2.setterhours(hour2);
    T2.setterhours(minute2);
    T2.setterhours(seconds2);*/

    cout << "Time difference " << T1.differencehrs(hours2)<< "hours " << T1.differencemins(minutes2)<< "minutes" << T1.differencesecs(seconds2)<< "seconds.\n";
}
