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
    friend std::ostream & operator<<(std::ostream & out, Mytime & t){
        std::string str = std::to_string(t.hour) + " : " + std::to_string(t.minute);
        out << str;
        return out;
    }
    friend std::istream & operator>>(std::istream & in, Mytime & t){
        in >> t.hour >> t.minute;
        t.hour += t.minute/60;
        t.minute %= 60;
        return in;
    }
    void info(){
        std::cout << hour << " : " << minute << "\n";
    }
};