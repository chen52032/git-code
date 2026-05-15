#include <iostream>
using namespace std;

bool print_fibon(int n){
    if(n<=0 || n>1024){
        cerr << "invalid positon. " << "please input:[0,1024]\n";
        return false;
    }
    cout << "the sequence for " << n << ":\n\t";
    switch(n){
        default:
        case 2:
            cout << "1";
        case 1:
            cout << "1";
            break;
    }
    int n1=1, n2=1, n3=0;
    for(int i=3; i<=n; ++i){
        n3 = n1 + n2;
        n1 = n2 ; n2 = n3;
        cout << n3 << (!(i%10) ? "\n\t" : " ");
    }
    cout << endl;
    return true;
}
