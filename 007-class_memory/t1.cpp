
#include <iostream>
#include "t1.hpp"

using namespace std;

int main()
{
    {
        Mystring str1(10, "Shenzhen");
        cout << "str1: " << str1 << endl;

        Mystring str2 = str1;
        cout << "str2: " << str2 << endl;
        char *p = new char[64]{};
        cout << "p add: " << static_cast<void*>(p) << endl;

        Mystring str3(3,"30");
        cout << "str3: " << str3 << endl;
        str3 = str1;
        cout << "str3: " << str3 << endl;
    }
    cout << "end of main()" << endl; // it can be printed out
    return 0;
}