#include "iostream"
using namespace std;

void re(int a){
    cout<<a<<'\n';
    if(a>1){
        re(a/2);
    }
    else{
        cout<<"---------------------------------------\n";
    }
    cout<<a<<'\n';
}