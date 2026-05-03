#include "student.hpp"
#include "complex.hpp"

class Demo{
    private:
    int id;
    public:
    Demo(int cid=0):id(cid){}
    static int num;
    void display(){
        std::cout << "stdtic num is: " << num << '\n';
    }
    static void showstatic(){
        std::cout << "static num is: " << num << '\n';
    }
};
int Demo::num = 100;

int main(){
    class student s[3];
    std::cout << "total:" << s[0].getTotal() << '\n';
    for (int i=0; i<3; i++){
        s[i].info();
    }
    std::cout << "===============================\n";
    s[0] = student("zhangsan", 18, 1);
    s[1] = student("lisi", 19, 0);
    s[2].setAge(20); s[2].setName("wangwu");
    for (int i=0; i<3; i++){
        s[i].info();
    }
    student yu = student{"yu", 54, 1};
    yu.info();
    std::cout << "===============================\n";
    student *p = new student[3];
    delete [] p;
    // delete [] s;
    std::cout << "========================" << "lab" << "========================\n";
    Demo obj;
    Demo obj1(1);

    obj.display();
    obj1.display();

    Demo::showstatic();

    std::cout << "========================" << "lab_e3" << "========================\n";
    
    root r{1,3},r2{1.9,35.5},r3;
    r3 = root::add(r, r2);
    r.info();
    r2.info();
    r3.info();
}