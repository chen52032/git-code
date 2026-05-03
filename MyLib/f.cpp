#include "iostream"
using namespace std;

bool f(size_t x) {
    if(x<2)
        return false;
    for(size_t p=2; p<x; p++){
        if(x%p==0)
            return false;
    }
    return true;
}
