#include <bits/stdc++.h>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void sethours(int hour)
    {
        hours = hour;
    }
    void setminutes(int minute)
    {
        minutes = minute;
    }
    void setseconds(int s)
    {
        seconds = s;
    }
    int differencehrs(int hrs);
    int differencemins(int mins);
    int differencesecs(int secs);
};

int Time::differencesecs(int secs)
{
    if(seconds>secs) return seconds - secs;
    else{
        minutes--;
        return 60-(secs-seconds);
    }
}
int Time::differencemins(int mins)
{
    if(minutes>mins) return minutes-mins;
    else{
        hours--;
        return 60-(mins-minutes);
    }
}
int Time::differencehrs(int hrs)
{
    return hours - hrs;
}

int main()
{
    Time T1;
    int hours1, minutes1, seconds1, hours2, minutes2, seconds2;
    cout << "Enter hours, minutes, seconds for 1st city: ";
    cin >> hours1 >> minutes1 >> seconds1;
    T1.sethours(hours1);
    T1.setminutes(minutes1);
    T1.setseconds(seconds1);
    cout << "\nEnter hours, minutes, seconds for 2nd city: ";
    cin >> hours2 >> minutes2 >> seconds2;

    cout << "Time difference " << T1.differencehrs(hours2) << " hours "
         << T1.differencemins(minutes2) << " minutes "
         << T1.differencesecs(seconds2) << " seconds.\n";
}
