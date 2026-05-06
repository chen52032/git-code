#pragma once
#include <iostream>

class Mytime{
    private:
    int hour;
    int minute;
    public:
    Mytime(int h, int m):hour(h), minute(m){}
    friend Mytime operator+(int m, Mytime & t){
        t.minute += m;
        t.hour += t.minute / 60;
        t.minute %= 60;
        return t;
    }
    void info(){
        std::cout << hour << " : " << minute << "\n";
    }
};