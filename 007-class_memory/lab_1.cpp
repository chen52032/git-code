#include <iostream>
#include <memory>
using namespace std;
int main()
{
    // double *p_reg = new double(5);
    shared_ptr<double> pd = make_shared<double>(5);
    // pd = p_reg;
    // pd = shared_ptr<double>(p_reg);  //让pd指向栈
    cout << "*pd = " << *pd << endl;
    // shared_ptr<double> pshared = p_reg;
    // shared_ptr<double> pshared(p_reg);   //让pshared指向栈,且pd和pshared都指向栈,改写法使两者引用计数都为1,析构时会double free
    shared_ptr<double> pshared = pd;
    cout << "*pshared = " << *pshared << endl;
    string str("Hello World!");
    // shared_ptr<string> pstr(&str);   //pstr指向栈
    shared_ptr<string> pstr(new string("Hello World!"));
    cout << "*pstr = " << *pstr << endl;
    return 0;
}
