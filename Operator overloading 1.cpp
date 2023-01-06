#include<iostream>
using namespace std;

class Time
{
    int h; int m; int s;
    public:
        Time(){}
        Time(int hour,int minute, int sec)
        {
            h=hour;
            m=minute;
            s=sec;
        }
        void convert()
        {
            
    m=m+s/60;
    s=s%60;
    h=h+m/60;
    m=m%60;

        }

        void showTime()
    {
        cout << endl
             << h << ":" << m << ":" << s;
    }

Time operator+(Time t)
    {
        Time t3;
        t3.s = s + t.s;
        t3.m = m + t.m;
        t3.h= h + t.h;
        t3.convert();
        return (t3);
    }
};

int main()
{
    Time t1(5, 15, 34),t2(9, 53, 58),t3;
 
    t3 = t1 + t2;
 
    t1.showTime();
    t2.showTime();
    t3.showTime();
 
    return 0;
}
