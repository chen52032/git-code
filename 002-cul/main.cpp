#include "head.h"
#include <omp.h>
using namespace std;
int main(){
    size_t a,b;
    cout<<"input:";
    cin>>a;
    // #pragma omp parallel for
    for(b=2; b<a; b++){
        if(f(b)&&f(a-b)){
            cout<<a<<"="<<b<<"+"<<a-b<<endl;
            return 0;
        }
    }
    cout<<"No such numbers found."<<endl;
    return 1;
}