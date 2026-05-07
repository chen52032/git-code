#pragma once
#include <iostream>

class Mytime{
    private:
    int hour;
    int minute;
    public:
    Mytime(int h, int m):hour(h), minute(m){}
    Mytime(int m):hour(0),minute(m){        //该构造函数只有一个参数,可在初始化时Mytime t = 10 进行传参调用
        hour += m/60;
        minute %= 60;
    }
    friend Mytime operator+(int m, Mytime & t){
        t.minute += m;
        t.hour += t.minute / 60;
        t.minute %= 60;
        return t;
    }
    friend std::ostream & operator<<(std::ostream & out, const Mytime & t){
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
    Mytime & operator++(){
        Mytime old=*this;
        this->minute++;
        this->hour += this->minute/60;
        this->hour %= 60;
        // std::cout << "no_int\n";
        return *this;
    }
    Mytime operator++(int){
        Mytime old=*this;
        this->minute++;
        this->hour += this->minute/60;
        this->hour %= 60;
        // std::cout << "yes_int";
        return old;
    }
    void info(){
        std::cout << hour << " : " << minute << "\n";
    }
};